// Example of Static with filename 
//file1.c
#include<stdio.h>
static int a=3;

//file2.c
#include<stdio.h>
#include "file1.c"
int main()
{
int b=5;
int sum =a+b;
printf("Result is: %d",sum);
return 0;
}

/*OUTPUT IS:
$ gcc file1.c file2.c -o file

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./file
Result is: 8
*/
