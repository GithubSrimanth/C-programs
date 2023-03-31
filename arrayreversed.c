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