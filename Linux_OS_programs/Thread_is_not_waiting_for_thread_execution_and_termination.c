/* Just thread will be create, but Thread is not waiting for thread execution and termination */

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>

pthread_t tid;
void* thread1(void *arg)
{
        printf("newly created Thread is executing\n");
        return NULL;
}

int main(void)
{

  int ret = pthread_create(&tid,NULL,thread1,NULL);
  if(ret)

                 printf("Thread is not created\n");

else

   printf("Thread is created\n");

 return 0;
}





/*OUTPUT IS: 

srimanth@srimanth-VirtualBox:~/Desktop$ vim thread_not_execution.c
srimanth@srimanth-VirtualBox:~/Desktop$ gcc thread_not_execution.c -o thread -lpthread
srimanth@srimanth-VirtualBox:~/Desktop$ ./thread
Thread is created

*/
