// example of extern , no need to include files
//file1.c
#include<stdio.h>
int a=5;

//file2.c
#include<stdio.h>
extern int a;
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
Result is: 10
*/
