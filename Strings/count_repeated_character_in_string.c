/*Count repeated character in a string*/
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
if(c[i]>1)
printf("\n %c character repeated =%d times",i,c[i]);
}
}

/*OUTPUT IS: Enter a string: SSrrrrriiiiiii   mmmmmmaaaaanthhhh

   character repeated =3 times
 S character repeated =2 times
 a character repeated =5 times
 h character repeated =4 times
 i character repeated =7 times
 m character repeated =6 times
 r character repeated =5 times
*/
