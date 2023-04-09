/*Print only repeated character in the given string*/
#include<stdio.h>
void main()
{
char str[500];
int i,n,c[123]={0};//count array which starts from 0 to 122,here all are initialized with 0 
printf("enter a string");
gets(str);
for(n=0;str[n]!='\0';n++);

for(i=0;i<n;i++)
c[str[i]]++;
for(i=0;i<123;i++)//it checks entire count array/integer array
{
if(c[i]>1)//c[i] count array chars which are repeated,it means greater than 1
printf("\n %c repeated character only",i);
//printf("\n %c character occurance = %d times",i,c[i]);
}
}

/*OUTPUT IS: enter a string Gaddam  '''\\\\\\

   repeated character only
 ' repeated character only
 \ repeated character only
 a repeated character only
 d repeated character only
*/
