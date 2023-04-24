// Program for Inter Processs communication using Message Queues using msgget(),msgsnd() and msgrcv

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdlib.h>

#define MAX_TEXT 50
struct my_msg
{
        long int msg_type;
        char some_text[MAX_TEXT];
};
int main()
{
        int running=1;//1 means true , 0 means false
        int msgid;
        struct my_msg some_data;
        char buffer[20];
        msgid=msgget((key_t)12345,0666|IPC_CREAT);// if creates msg queue the nit returns +ve value 
       if(msgid==-1)
       {
               printf("error in creating queue\n");
       }
       while(running) // if cond true
       {
               printf("Enter some text\n");
               fgets(buffer,20,stdin);// fgets func to  receive data from the user and temporarly store in the buffer 
                                      //it reads only first 20 characters of data  from the stdin(keyboard) and saved in the buffer.
               some_data.msg_type=1;
               strcpy(some_data.some_text,buffer);// it copying from the buffer to structure variable i.e,some_data.some_text
               if(msgsnd(msgid,(void *)&some_data,MAX_TEXT,0)==-1)//4th arg is 0, it means sending process will be suspended waiting for a space and
                                                                  //become available in the queue. and 1 means process will return immediately without
                                                                  //sending the message                                   
               {
                       printf("message not sent\n");
               }
               if(strncmp(buffer,"end",3)==0)
               {
                       running=0;
               }
               
      /*OUTPUT IS: 
              Enter some text
Hello embedded developers
Enter some text
Enter some text
Practice more and more
Enter some text
Enter some text
end
*/
