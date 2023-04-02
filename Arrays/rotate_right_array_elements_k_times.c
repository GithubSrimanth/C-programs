/* C program to rotate right array elements k times*/
#include<stdio.h>
void main()
{
int a[100],i,j,k,n,temp;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter number of k times: ");
scanf("%d",&k);

for(j=1;j<=k;j++)
{
temp=a[n-1];
for(i=n-1;i>=1;i--)
{
a[i]=a[i-1];
}
a[i]=temp;
}
printf("After right rotate array ele: ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

/* OUTPUT IS: $ gcc rotaterightarrayele.c -o rra

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./rra
Enter array size: 6
Enter array elements: 30 50 20 60 90 70
Enter number of k times: 2
After right rotate array ele: 90        70      30      50      20      60
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./rra
Enter array size: 5
Enter array elements: 60 24 67 40 70
Enter number of k times: 3
After right rotate array ele: 67        40      70      60      24
*/
