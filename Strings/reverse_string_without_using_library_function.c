/*Reverse a string in c without using a library function*/
#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,j,n,t;
printf("Enter a string: ");
gets(str);
for(n=0;str[n]!='\0';n++);//n is length of the string
for(i=0,j=n-1;i<j;i++,j--)
{
t=str[i];
str[i]=str[j];
str[j]=t;
}
printf("After reversing, the string is %s",str);
}


/*OUTPUT IS: Enter a string: I want job
After reversing, the string is boj tnaw I
*/
