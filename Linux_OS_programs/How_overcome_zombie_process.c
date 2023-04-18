/How to avoid/ overcome the  zombie process/

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
wait(&stat);
sleep(15);// parent will sleep for 15 sec meanwhile enter ps to see the zombie creation <defunct>
printf("I am parent having id: %d\n",getpid());
printf("my child id is: %d\n",id);
}
}




/*OUTPUT IS: 
 srimanth@srimanth-VirtualBox:~/Desktop$ ./zombie_proc
I am child having pid: 6868
my parent id is : 6867
I am parent having id: 6867
my child id is: 6868
*/
