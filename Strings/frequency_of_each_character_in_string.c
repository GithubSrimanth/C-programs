/*Count frequency of each character or repeated character in string*/
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
printf("\n %c repeated =%d times",i,c[i]);
}
}


/*OUTPUT IS: Enter a string: sssrrrrriimmmaanntttthhh

 a repeated =2 times
 h repeated =3 times
 i repeated =2 times
 m repeated =3 times
 n repeated =2 times
 r repeated =5 times
 s repeated =3 times
 t repeated =4 times
*/
