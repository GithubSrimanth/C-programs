// Actual logic of multi threading 
#include<stdio.h>
#include<pthread.h>
void thread_fp1(void*arg)
{
    while(1)
    {
        printf("Hi, its thread 1\n");
        sleep(1);
    }
}
void thread_fp2(void*arg)
{
    while(1)
    {
        printf("Hi, its thread 2\n");
        sleep(1);
    }
}
void main()
{
    pthread_t th1,th2;
    
    //pthread_create(pthread_t *thread,pthread_attr_t *myattr,void*(*fp),void*arg);
    pthread_create(&th1,NULL,&thread_fp1,NULL);
    pthread_create(&th2,NULL,&thread_fp2,NULL);
    
    pthread_join(th1,NULL);
    pthread_join(th2,NULL);
}


/*OUTPUT IS: 
Hi, its thread 2
Hi, its thread 1
Hi, its thread 2
Hi, its thread 1
Hi, its thread 2
Hi, its thread 1
Hi, its thread 2
Hi, its thread 1
*/
