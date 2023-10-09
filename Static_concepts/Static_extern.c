// Static with extern example
//file1.c
#include<stdio.h>
static int a=3;

//file2.c
#include<stdio.h>
#include "file1.c"
extern int a;
int main()
{
int b= 1;
int sum = a+b;
printf("Result is: %d",sum);
}

/*OUTPUT IS:$ gcc file1.c file2.c -o file

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./file


*/
