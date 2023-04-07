/*C program sum of last four digits vehicle number without using atoi function in strings*/
#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int n,i,sum=0;
printf("Enter a string: ");
gets(str);
for(n=0;str[n]!=0;n++);
for(i=n-4;i<n;i++)
{
sum+=str[i]-'0';//'1'-'0'=1 or1 ASCII value is 49, 0 is 48
}
printf("without using atoi function, the string sum is: %d",sum);
}

/*OUTPUT IS: Enter a string: TS04z6576
without using atoi function, the string sum is: 24
*/
