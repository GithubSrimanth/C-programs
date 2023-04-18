/*Replace current process image with same PID using execl() system call    or    Program to replace process image using execl( ). */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
        pid_t id;
        id=fork();
        if(id==0)
        {
                printf("I am child having id is: %d\n",getpid());
                execl("/bin/ps","ps",NULL);
        }
        else
        {
                wait(NULL);
                printf("I am parent having id is : %d\n",getpid());

        }

}





/*OUTPUT IS: 
I am child having id is: 7998
    PID TTY          TIME CMD
   2070 pts/0    00:00:00 bash
   6727 pts/0    00:00:00 vim
   7997 pts/0    00:00:00 execl_fork
   7998 pts/0    00:00:00 ps
I am parent having id is : 7997

*/
