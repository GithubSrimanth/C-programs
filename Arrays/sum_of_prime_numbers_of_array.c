/* Program to find sum of prime  numbers of array*/
#include<stdio.h>
int prime(int x)
{
int i;
if(x<2)
{
return 0;
}
for(i=2;i*i<=x;i++)
{
if(x%i==0)
{
return 0;
}
}
return 1;
}
int main()
{
int a[100],i,size=5,sum=0;
printf("Enter array: ");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
for(i=0;i<size;i++)
{
if(prime(a[i]))
{
sum=sum+a[i];
}
}
printf("sum of array prime numbers are: %d",sum);
}

/*OUTPUT IS: 
Enter array: 3 5 2 6 11
sum of array prime numbers are: 21
*/
