/*Multi-threading programming using c*/
#include<stdio.h>
#include<pthread.h>

#define NUM_THREADS 5

void *threadFunction(void *arg)
{
        int threadNumber=*(int *)arg;
        printf("Thread %d is running \n",threadNumber);
        return NULL;
}

int main()
{
        pthread_t threads[NUM_THREADS];
        int threadArgs[NUM_THREADS];
        int i;

        for(i=0;i<NUM_THREADS;i++)
        {
                threadArgs[i]=i;
                pthread_create(&threads,NULL,threadFunction,&threadArgs[i]);

        }

        for(i=0;i<NUM_THREADS;i++)
        {
                pthread_join(threads[i],NULL);
        }

        printf("ALL threads have completed");
return 0;
}

/*OUTPUT IS:Thread 4 is running 
ALL threads have completed
*/





/*NOTES:
After creating the threads, we use pthread_join to wait for each thread to finish its execution. This ensures that the main thread waits until all the other threads have completed before proceeding. Finally, a message is printed to indicate that all threads have completed.
*/
