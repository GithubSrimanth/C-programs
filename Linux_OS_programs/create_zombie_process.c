/*How to create zombie process*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
int id,stat;
id=fork();
if(id==0)
{
	printf("I am child having pid: %d\n",getpid());
	printf("my parent id is : %d\n",getppid());
}
else
{
//wait(&stat);
sleep(15);// parent will sleep for 15 sec meanwhile enter ps to see the zombie creation <defunct>
printf("I am parent having id: %d\n",getpid());
printf("my child id is: %d\n",id);
}
}





/*OUTPUT IS: 
srimanth@srimanth-VirtualBox:~/Desktop$ I am child having pid: 6818
my parent id is : 6817
ps
    PID TTY          TIME CMD
   2070 pts/0    00:00:00 bash
   6727 pts/0    00:00:00 vim
   6817 pts/0    00:00:00 zombie
   6818 pts/0    00:00:00 zombie <defunct>
   6822 pts/0    00:00:00 ps
srimanth@srimanth-VirtualBox:~/Desktop$ I am parent having id: 6817
my child id is: 6818
*/
