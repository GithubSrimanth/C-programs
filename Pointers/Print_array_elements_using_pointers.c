/*Print array elements using pointers*/
#include<stdio.h>
int main()
{
int a[100],i,n;
printf("Enter an array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d", a+i);
}
printf("\nThe given array elements are: ");
for(i=0;i<n;i++)
{
printf("\n%d",*(a+i));
}
return 0;
}



/* OUTPUT IS: 
Enter an array size: 5
Enter array elements: 10 20 30 40 50

The given array elements are:
10
20
30
40
50
*/
