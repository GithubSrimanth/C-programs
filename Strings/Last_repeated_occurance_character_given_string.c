/*Find the last repeated character in the given string*/
#include<stdio.h>
void main()
{
char str[100];
int temp,i,n,c[123]={0};
printf("Enter a string: ");
gets(str);
for(n=0;str[n]!='\0';n++);
for(i=0;i<n;i++)
{
c[str[i]]++;
}
for(i=0;i<n;i++)
{
if(c[str[i]]>1)
{
temp=str[i];
}
}
printf("%c",temp);
}

/*OUTPUT IS: Enter a string: embedded
d
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./lrc
Enter a string: improve your skills
s
*/
