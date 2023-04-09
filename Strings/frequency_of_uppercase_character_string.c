/*Frequency of uppercase character string*/
#include<stdio.h>
void main()
{
char str[500];
int i,c[26]={0};
printf("Enter a string: ");
gets(str);
for(i=0;str[i]!='\0';i++)
c[str[i]-'A']++;
for(i=0;i<26;i++)
{
if(c[i]>1)
printf("\n %c uppercase character frequency = %d times",i+'A',c[i]);
}
}

/*OUTPUT IS: Enter a string: SSSSSSSRRRRRRRRRIII      MMMAAAAANTHHH

 A uppercase character frequency = 5 times
 H uppercase character frequency = 3 times
 I uppercase character frequency = 3 times
 M uppercase character frequency = 3 times
 R uppercase character frequency = 9 times
 S uppercase character frequency = 7 times
*/
