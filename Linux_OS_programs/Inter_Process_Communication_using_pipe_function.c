/*Program for Inter-Process Communication using pipe() function */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
 int fd[2],n;
 char buffer[50];
 pid_t id;
 pipe(fd);
 id=fork();
 if(id>0)
 {
         printf("Parent passing value to child\n");
         write(fd[1], "Srimanth\n",9);
 }

 else
 {
        printf("Child received the data\n");
        n=read(fd[0],buffer,50);
        write(1,buffer,n);
 }

}




/*OUTPUT IS: 
Parent passing value to child
srimanth@srimanth-VirtualBox:~/Desktop$ Child received the data
Srimanth
*/
