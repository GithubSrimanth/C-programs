/*sum_of_last_four_digits_vehicle_number using atoi function*/
#include<stdio.h>
#include<string.h>
void main()
{
char str[100],str2[100];
int n,i,j,num,sum=0;
printf("Enter a string: ");
gets(str);
for(n=0;str[n]!='\0';n++);//for string length
for(i=n-4,j=0;i<n;i++,j++)
{
str2[j]=str[i];
}
str2[j]='\0';
num=atoi(str2);//convert from char to integer
while(num!=0)
{
sum=sum+num%10;
num=num/10;
}
printf("%d",sum);
}

/*OUTPUT IS: Enter a string: TS04s6576
24
*/
