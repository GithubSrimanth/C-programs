/*Print length of the string without using strlen()function and without extra variable */
#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i;
printf("Enter a string: ");
gets(str);
for(i=0;str[i]!='\0';i++);// if we want to know string length simply we use this stringlength for loop 
printf("the given length of the string is: %d",i);
}

/*OUTPUT IS: Enter a string: Srimanth Gaddam
the given length of the string is: 15
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./slw
Enter a string: Srimanthgaddam
the given length of the string is: 14
*/
