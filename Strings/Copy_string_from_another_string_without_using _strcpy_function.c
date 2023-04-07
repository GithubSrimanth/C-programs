/*Copy a string from one string to another string without using strcpy() function*/
#include<stdio.h>
void main()
{
char str1[100],str2[100];
int i;
printf("Enter a string: ");
gets(str1);
for(i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
printf("copy the given string without using strcpy function: %s",str2);
}


/*OUTPUT IS: Enter a string: Srimanth Gaddam
copy the given string without using strcpy function: Srimanth Gaddam
*/
