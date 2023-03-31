/*
1. Write a C program to sort array elements in descending order.*/
#include<stdio.h>
int main()
{
int a[5]={9,5,2,6,3};
int i,j,temp;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Desending order array ele's: ");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
return 0;
}



/* 2. Write a C program to sort array elements in ascending order.
*/

#include<stdio.h>
int main()
{
int a[5]={9,5,2,6,3};
int i,j,temp;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Ascending order array ele's: ");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
return 0;
}
