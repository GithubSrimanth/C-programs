/*Print sum of the given array elements without declaring pointer variable*/
#include<stdio.h>
int main()
{
int a[100],i,n,sum=0;
printf("Enter an array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
for(i=0;i<n;i++)
sum+=*(a+i);
printf(" sum of array elements are: %d",sum);
}


/*OUTPUT IS: 
Enter an array size: 5
Enter array elements: 10 20 30 40 50
 sum of array elements are: 150
*/
