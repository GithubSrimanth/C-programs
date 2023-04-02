/*C program Sum of odd numbers in array */
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
if(a[i]%2==1)
sum=sum+a[i];
}
printf("sum of odd numbers = %d",sum);
}

/* OUTPUT is: $ gcc sumofoddarrayele.c -o soa

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./soa
Enter array size: 6
Enter array elements: 87 98 23 82 48 11
sum of odd numbers = 121
*/
