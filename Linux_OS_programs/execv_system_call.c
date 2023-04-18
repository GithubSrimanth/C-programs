/*1. execv_demo.c  and hello.c two programs*/
#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("I am in exec_demo.c\n");
	printf("PID of exec_demo.c is %d\n",getpid());
	char *args[]={"./hello",NULL};
	execv(args[0],args);
	printf("coming back to execv_demo.c"); //this will not be executed
	return 0;				       
}


/* 2. hello.c program*/

#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("I am in hello.c\n");
	printf("PID of hello.c is %d\n",getpid());
	return 0;
}





/*OUTPUT IS: 
srimanth@srimanth-VirtualBox:~/Desktop$ gcc execv_demo.c -o demo
srimanth@srimanth-VirtualBox:~/Desktop$ gcc hello.c -o hello
srimanth@srimanth-VirtualBox:~/Desktop$ ./demo
I am in exec_demo.c
PID of exec_demo.c is 8824
I am in hello.c
PID of hello.c is 8824
*/
