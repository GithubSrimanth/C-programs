/*Find first non repeated character in the given string*/
#include<stdio.h>
void main()
{
char str[100];
int i,n,c[123]={0};
printf("Enter a string: ");
gets(str);
for(n=0;str[n]!='\0';n++);
for(i=0;i<n;i++)
{
c[str[i]]++;
}
for(i=0;i<n;i++)
{
if(c[str[i]]==1)
{
printf("%c",str[i]);
break;
}
}
}


/*OUTPUT IS: Enter a string: srimanthgaddamsri
n
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./frc
Enter a string: srimanthgaddam
s
*/
