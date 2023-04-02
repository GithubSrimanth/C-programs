/*Sum of even array elements*/
#include<stdio.h>
void main()
{
int a[100],i,n,sum=0;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
sum=sum+a[i];
}
printf("sum of even numbers = %d",sum);
}

/*OUTPUT is: $ ./sea
Enter array size: 5
Enter array elements: 30 50 32 23 12
sum of even numbers = 124
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./sea
Enter array size: 6
Enter array elements: 23 40 78 45 13 50
sum of even numbers = 168
*/
