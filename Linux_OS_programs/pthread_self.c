// print process PID and thread id

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_t tid;
void *th_func(void *arg)
{
        pid_t pid;
        pthread_t tid;
        pid=getpid();
        tid= pthread_self();
        printf("pid %u tid %u \n",(unsigned int) pid,(unsigned int)tid);
        return 0;
}
int main(void)
{
 int err;
 err= pthread_create(&tid,NULL,th_func,NULL);
 if(err!=0)
         printf("can't create thread: %s\n",strerror(err));
 while(1);
 exit(0);
}

/*OUTPUT IS: 
pid 3869 tid 3252680256
*/
