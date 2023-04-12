/*process is created using single time fork() system call*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    fork();
    printf("the process is created using fork() system call\n");
    return 0;
}




/*OUTPUT IS: 
the process is created using fork() system call
the process is created using fork() system call
*/
