//Program attaches itself to the shared memory segment created in Program 1, and it reads the content of the shared memory.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
int i;
void *shared_memory;
char buff[100];
int shmid;
shmid=shmget((key_t)1122, 1024, 0666);
printf("Key of shared memory is %d\n",shmid);
shared_memory=shmat(shmid,NULL,0); //2nd arg NULL means OS will itself attach shared memory segment at suitable address of the process  
printf("Process attached at %p\n",shared_memory);
printf("Data read from shared memory is : %s\n",(char *)shared_memory);
}

/*OUTPUT IS: srimanth@srimanth-VirtualBox:~/Desktop$ gcc shared_memory_sender.c -o sm_sender
srimanth@srimanth-VirtualBox:~/Desktop$ ./sm_sender
Key of shared memory is 14
Process attached at 0x7f6134920000
Enter some data to write to shared memory
Hey! my name is Srimanth
You wrote : Hey! my name is Srimanth

srimanth@srimanth-VirtualBox:~/Desktop$ gcc shared_memory_receiver.c -o sh_receiver
srimanth@srimanth-VirtualBox:~/Desktop$ ./sh_receiver
Key of shared memory is 14
Process attached at 0x7f95f3282000
Data read from shared memory is : Hey! my name is Srimanth
*/
