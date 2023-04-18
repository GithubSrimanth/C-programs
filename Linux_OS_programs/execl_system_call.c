/* Program to replace process image using execl( ). Process ps -elf or ls -l  will replace the image of current process*/

#include<stdio.h>
#include<unistd.h>

int main()
{
 printf("Before execl\n");
 execl("/bin/ps","ps",NULL);
 printf("After execl\n");
}


/*OUTPUT IS:
Before execl
    PID TTY          TIME CMD
   2070 pts/0    00:00:00 bash
   6727 pts/0    00:00:00 vim
   7726 pts/0    00:00:00 ps
 */












/*Notes:
 
  when we apply Execl() only Before execl statements will be displayed and ls -l current file directory information only.
  we never see after execl() statements in the output because process image has been replaced by ls command.

just it  shows the current process only.No new process has been created

execl() function is mainly used when we want to replace the current process image of a child process with the new image.
 
 */
