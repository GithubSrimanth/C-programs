//multi threads creation with pthread_join function
#include<stdio.h>
#include<pthread.h>
void* thread_p1(void*arg)
{
    printf("Hai\n");
}
void* thread_p2(void*arg)
{
    printf("\nBye");
}
void main()
{
    pthread_t th1,th2;
    
    //pthread_create(pthread_t *thread,pthread_attr_t *myattr,void*(*fp),void*arg);
    pthread_create(&th1,NULL,&thread_p1,NULL);
    pthread_create(&th2,NULL,&thread_p2,NULL);
    
    pthread_join(th1,NULL);
    pthread_join(th2,NULL);
    
}


/*OUPUT IS:

Hai
Bye

*/
