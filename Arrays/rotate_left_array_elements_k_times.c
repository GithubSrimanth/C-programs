/* C program to rotate left array elements k times*/
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
temp=a[0];
for(i=0;i<n-1;i++)
{
a[i]=a[i+1];
}
a[i]=temp;
}
printf("After left rotate array ele: ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}


/* OUTPUT IS: Enter array size: 6
Enter array elements: 30 50 70 20 90 45
Enter number of k times: 1
After left rotate array ele: 50 70      20      90      45      30
user@DESKTOP-IL6OQ24 ~/Cprograms
$ gcc rotateleftarrayele.c -o rlae

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./rlae
Enter array size: 6
Enter array elements: 30 50 20 60 90 70
Enter number of k times: 2
After left rotate array ele: 20 60      90      70      30      50
user@DESKTOP-IL6OQ24 ~/Cprograms
$ gcc rotateleftarrayele.c -o rlae

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./rlae
Enter array size: 5
Enter array elements: 60 24 67 40 70
Enter number of k times: 3
After left rotate array ele: 40 70      60      24      67
*/
