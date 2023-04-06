#include<stdio.h>
#include<string.h>
int main()
{
char ch[100];
printf("Enter a string: ");
//scanf("%s",&ch);
//scanf("%[^\n]s",ch);
gets(ch);
for(int i=strlen(ch)-1;i>=0;i--)
{
printf("%c ",ch[i]);
}
return 0;
}

/*OUTPUT IS: Enter a string: Good Friday
d o o G
user@DESKTOP-IL6OQ24 ~/Cprograms
$ gcc reverse_given_string.c -o rgs

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./rgs
Enter a string: Good Friday
y a d i r F   d o o G
Enter a string: Good Friday
y a d i r F   d o o G
*/
