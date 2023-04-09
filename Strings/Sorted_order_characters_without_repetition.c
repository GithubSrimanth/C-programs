/*print all Sorted order/characters the given string without repetition*/
#include<stdio.h>
void main()
{
char str[100];
int i,n,c[123]={0};
printf("Enter a string: ");
gets(str);
for(n=0;str[n]!='\0';n++);
for(i=0;i<n;i++)
c[str[i]]++;
for(i=0;i<123;i++)
{
if(c[i]!=0)
printf("%c",i);
}
}

/*OUTPUT IS: Enter a string: sssrrrrriiiiimmmmmaanntthh

ahimnrst
*/
