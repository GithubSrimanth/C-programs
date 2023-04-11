/*Reverse values/elements of an array*/
#include<stdio.h>
int main()
{
int arr[5],i,*p;
for(i=0;i<5;i++)
{
printf("Enter array values for arr[%d]",i);
scanf("%d",&arr[i]);
p=&arr[4];
}
printf("the reveresed array values are: ");
for(i=0;i<5;i++)
{
printf("%d",*p--);
}
}


/*OUTPUT IS: Enter array values for arr[0]9
Enter array values for arr[1]3
Enter array values for arr[2]5
Enter array values for arr[3]2
Enter array values for arr[4]7
the reveresed array values are: 72539
*/
