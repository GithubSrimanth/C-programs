/*Concatenate 2 strings without using strcat()function*/
#include<stdio.h>
void main()
{
char str1[100],str2[100];
int i,n,j;
printf("Enter a string1: ");
gets(str1);
printf("Enter a string2: ");
gets(str2);
for(n=0;str1[n]!='\0';n++);// to find the string length 
for(i=n,j=0;str2[j]!='\0';i++,j++)
{
str1[i]=str2[j];
}
printf("After concatenation the string1 is became like this:%s",str1);
}

/* OUTPUT IS: Enter a string1: Hello My De
Enter a string2: ar Friend
After concatenation the string1 is became like this:Hello My Dear Friend
*/
