#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 1000
int main()
{
int i,size,max1,max2;
int a[MAX_SIZE];
printf("Enter array size: ");
scanf("%d",&size);
printf("enter array ele's are:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
max1=max2=INT_MIN;
for(i=0;i<size;i++)
{
if(a[i]>max1)
{
max2=max1;
max1=a[i];
}

else if(a[i]>max2 && a[i]<max1)
{
max2=a[i];
}
}
printf("the first largest num is: %d", max1);
printf("the second largest num is: %d",max2);
return 0;
}
