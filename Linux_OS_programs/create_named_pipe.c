#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
        int res;
        res=mkfifo("fifo",0777);
        printf("named pipe created\n");
}

/*OUTPUT IS: named pipe created*/
