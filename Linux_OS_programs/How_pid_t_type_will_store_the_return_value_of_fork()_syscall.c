/*How pid_t type will store the return value of fork() syscall*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t id;
    id = fork();
    if(id==-1)
    {
        printf("There is a failure error, so we unable to call fork() syscall to create  child process\n");
    }
    if(id==0)
    {
        printf("Child process is created successfully\n");
    }
    else
    {
        printf("Parent process is created successfully\n");
    }
    return 0;
    }
    
    
    
    
    /*OUTPUT IS: 
    Parent process is created successfully
    Child process is created successfully
    */
