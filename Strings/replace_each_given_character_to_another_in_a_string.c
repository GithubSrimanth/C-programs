/*replace each given character to another in a string*/
#include<stdio.h>
#include<string.h>

int main()
{
char str[100],s;
int n,i,temp;
printf("enter string:\n");
gets(str);
printf("enter the character to be replaced:\n");
scanf("%c",&s);

for(i=0;str[i]!='\0';i++)
{
if(str[i]==s)
{
str[i]='a';
}
}
printf("%s",str);
}


/*OUTPUT IS: enter string:
Srimaath
enter the character to be replaced:
a
Srimnnth
*/
