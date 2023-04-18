/* how to create a Thread*/
#include<stdio.h>
#include<pthread.h>

pthread_t tid;
void* thread1(void *arg)
{
	printf("newly created thread is executing\n");
	return NULL;
}
int main()
{
	//pthread_create("pthread_t thread, pthread_attr_t *myattr,void(*start_routine)(),void*arg");

	int ret =pthread_create(&tid,NULL,thread1,NULL);
	if(ret)
		printf("thread is not created\n"); // return EAGAIN and EPERM errors
	else
		printf("thread is created\n"); // return 0 means SUCCESS
	pthread_join(tid,NULL);
	return 0;
}




/*OUTPUT IS: 

thread is created
newly created thread is executing

*/
