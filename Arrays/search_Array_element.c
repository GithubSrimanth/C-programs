#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int size, i, se;
int a[MAX_SIZE];
printf("Enter array size: ");
scanf("%d",&size);
printf("Enter array ele's:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter search element:");
scanf("%d",&se);
for(i=0;i<size;i++)
{
if(a[i]==se)
{
printf("search ele is %d found at position %d",se, i);
}
else
{
printf("search ele is not found");
}
}
}
