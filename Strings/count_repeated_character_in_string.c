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

/*OUTPUT IS: Enter a string: Ssssssssrrrrrriiiii    mmmmmmaaaaaaaannnnntttthhhhhh@@@@@@2222222222444444

   character repeated =4 times
 2 character repeated =10 times
 4 character repeated =6 times
 @ character repeated =6 times
 a character repeated =8 times
 h character repeated =6 times
 i character repeated =5 times
 m character repeated =6 times
 n character repeated =5 times
 r character repeated =6 times
 s character repeated =7 times
 t character repeated =4 times

*/
