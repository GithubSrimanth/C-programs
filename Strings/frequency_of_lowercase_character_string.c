/*frequency of lowercase character string*/
#include<stdio.h>
void main()
{
char str[100];
int i,c[26]={0};
printf("Enter a string: ");
gets(str);
for(i=0;str[i]!='\0';i++)
c[str[i]-'a']++;
for(i=0;i<26;i++)
{
if(c[i]>1)
printf("\n %c character frequency= %d times",i+'a',c[i]);
}
}

/*OUTPUT IS: Enter a string: aaabbbbbcccdeff

 a character frequency= 3 times
 b character frequency= 5 times
 c character frequency= 3 times
 f character frequency= 2 times
*/
