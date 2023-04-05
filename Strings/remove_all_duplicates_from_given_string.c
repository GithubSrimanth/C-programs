/*C program to remove all duplicates/repeated from a given string
*/
#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
int main()
{
char str[100],i,j,k;
printf("Enter a String: ");
gets(str);

for(i=0;i<strlen(str);i++)
{
for(j=i+1;j<strlen(str);)
{
if(str[i]==str[j])
{
for(k=j;k<strlen(str);k++)
{
str[k]=str[k+1];
}
}
else
j++;
}
}
printf("After remove the repeated elements the string is: %s",str);
return 0;
}



/*OUTPUT IS: Enter a String: SSSrriiimmmmaaannttthh
After remove the repeated elements the string is: Srimanth
*/
