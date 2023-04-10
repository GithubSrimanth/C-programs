/*Highest occurred/repeated character in a String*/
#include<stdio.h>
#include<string.h>
void main()
{
int i,j;
int count=0,maxcount=0;
char str[100];
char maxchar;
printf("Enter a string: ");
gets(str);
for(i=0;i<strlen(str);i++)
{
count=0;
for(j=0;j<strlen(str);j++)
{
if(str[i]==str[j])
count++;
}
if(maxcount<count)
{
maxcount=count;
maxchar=str[i];
}
}
printf("The max occuring character is: %c",maxchar);
}


/*OUTPUT IS: Enter a string: srimanth gaddam
The max occuring character is: a */
