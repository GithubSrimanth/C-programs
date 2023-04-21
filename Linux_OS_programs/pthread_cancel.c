/*Pthread_cancellation function */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>

void *printHello(void *threadid)
{
        printf("\n Hello world!\n");
        while(1);
}


int main()
{
  pthread_t thread;
  int rc,t=0;
  printf("Creating thread %d\n",t);
  rc= pthread_create(&thread,NULL,printHello,NULL);
  printf("\n thread ID: %u", thread);
  sleep(5);
 t=pthread_cancel(thread);
 if(t==0)
         printf("\n canceled thread\n");
 printf("\n Thread id: %u\n",thread);
 if(rc)
 {
         printf("ERROR; return code from pthread_create() is %d\n",rc);
         exit(-1);
 }

}

/*OUTPUT IS:
Creating thread 0

 thread ID: 1795159616
 Hello world!

 canceled thread

 Thread id: 1795159616
 */
