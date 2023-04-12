/* Create a process using multiple times fork() syscalls*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    fork();
    fork();
    fork();
    printf("this process is created by fork() system call");
    return 0;
}




/*OUTPUT IS: 
 2 power 3 it means =2 cube=8
 The process will be created 8 times..
 this process is created by fork() system call
 this process is created by fork() system call
 this process is created by fork() system call
 this process is created by fork() system call
 
 this process is created by fork() system call
 this process is created by fork() system call
 this process is created by fork() system call
 this process is created by fork() system call
 
 */
