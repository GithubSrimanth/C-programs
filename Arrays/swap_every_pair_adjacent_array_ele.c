/* C program for swapping every pair of adjacent array elements*/
#include<stdio.h>
int main()
{
int a[100],i,n,temp;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i+=2)
{
temp = a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
printf("After swapping every pair of adjacent array elements: ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}



/* OUTPUT IS : $ gcc swapadjacentpairarrayele.c -o sapa

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./sapa
Enter array size: 6
Enter array elements: 10 20 30 40 50 60
After swapping every pair of adjacent array elements: 20        10      40     30       60      50
 */
