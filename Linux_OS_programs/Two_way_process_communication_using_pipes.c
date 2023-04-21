/*Two way process communication using pipe() system call*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
        int fd1[2],fd2[2],n,m;
        char buffer[100];
        pid_t id;
        pipe(fd1);// 1st pipe is created
        pipe(fd2);// 2nd pipe is created 
        id=fork();// child is created
        if(id>0)
        {
                close(fd1[0]);//close read end of pipe1
                close(fd2[0]);//close write end of pipe2
                printf("Passing value to child--> pipe1\n");
                write(fd1[1],"hello my child\n",15);
                m=read(fd2[0],buffer,100);
                write(1,buffer,m);
                wait(0);
        }
        else
        {
                close(fd1[1]);//close write end of pipe1
                close(fd2[0]);//close read end of pipe2
                n=read(fd1[0],buffer,100);
                write(1,buffer,n);
                printf("Passing value to parent --> pipe2\n");
                write(fd2[1],"hello my parent\n",15);
                wait(0);
        }
       
}


/*OUTPUT IS:
Passing value to child--> pipe1
hello my child
Passing value to parent --> pipe2
hello my parent
*/
