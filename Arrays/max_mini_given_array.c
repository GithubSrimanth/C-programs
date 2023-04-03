/*Write a C program to find maximum and minimum element in an array.*/
#include<stdio.h>
void main()
{
int a[100],i,n,max,min;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>=max)
{
max=a[i];
}
if(a[i]<=min)
{
min=a[i];
}
}
printf("The maximum number in the given array is =%d", max);
printf("The minimum number in the given array is =%d",min);
}

/*OUTPUT IS: Enter array size: 5
Enter array elements: 87 98 23 43 99
The maximum number in the given array is =99The minimum number in the given arry is =23
 */
