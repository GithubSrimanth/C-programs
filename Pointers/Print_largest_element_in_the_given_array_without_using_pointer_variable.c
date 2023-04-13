/*Print largest element in the given array using pointers*/

#include<stdio.h>
int main()
{
int a[100],i,n,large;
printf("Enter an array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
large=*(a+0); // *a or *(a+0) both are same
for(i=1;i<n;i++)
{
if(*(a+i)>large)
{
large =*(a+i);
}
}
printf("Largest value is: %d", large);
}



/*OUTPUT IS: 

Enter an array size: 5
Enter array elements: 10 30 80 44 23
Largest value is: 80

*/
