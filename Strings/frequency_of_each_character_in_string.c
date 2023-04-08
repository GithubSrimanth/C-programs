/*frequency of each character in string*/
#include<stdio.h>
void main()
{
char str[500];
int i,c[123]={0};
printf("Enter a string: ");
gets(str);
for(i=0;str[i]!='\0';i++)
c[str[i]]++;
for(i=0;i<123;i++)
{
if(c[i]!=0)
printf("\n %c character frequency is =%d times",i,c[i]);
}
}


/*OUTPUT IS:Enter a string: Ssssrrrrriimmmmmmaannnttttthhhhh

 S character frequency is =1 times
 a character frequency is =2 times
 h character frequency is =5 times
 i character frequency is =2 times
 m character frequency is =6 times
 n character frequency is =3 times
 r character frequency is =5 times
 s character frequency is =3 times
 t character frequency is =5 times

*/
