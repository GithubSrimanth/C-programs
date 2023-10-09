// example of static using pointers
//file1.c
#include<stdio.h>
static int a=10;


//file2.c
#include<stdio.h>
#include "file1.c"
int main()
{
int *ptr;
ptr= &a;
int b= 14;
//int sum = a+b; or
int sum = *ptr + b;
printf("Result is: %d",sum);
return 0;
}

/*OUTPUT IS: 
$ gcc file1.c file2.c -o file

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./file
Result is: 24
*/
