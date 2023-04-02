/*Sum of positive and negative array elements*/
#include<stdio.h>
void main()
{
int a[100],i,n,sum=0,sum2=0;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]>0)
{
sum=sum+a[i];
}
else
{
sum2=sum2+a[i];
}
}
printf("sum of Positive numbers =%d sum of negative numbers =%d",sum,sum2);
}


/*OUTPUT IS: Enter array size: 6
Enter array elements: 3 -5 23 -6 7 -9
sum of Positive numbers =33 sum of negative numbers =-20
*/
