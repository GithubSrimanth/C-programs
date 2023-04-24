// Clients or sender process wants to send message to server or receiver process

// 1.Sender/client program
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
        int res,n;
        res=open("fifo",O_WRONLY);
        write(res,"message",7);
        printf("Sender or client process having pid %d sent the data\n",getpid());
}

// 2. Receiver or server program
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
        int res,n;
        char buff[100];
        res=open("fifo",O_RDONLY);
        n=read(res,buff,100);
        printf("Reader or server process having pid %d started\n",getpid());
        printf("Data received by receiver %d is: %s\n",getpid(),buff);
}

/*OUTPUT IS: 
srimanth@srimanth-VirtualBox:~/Desktop$ ./client & ./server
[1] 3785
Sender or client process having pid 3785 sent the data
Reader or server process having pid 3786 started
Data received by receiver 3786 is: message
*/
