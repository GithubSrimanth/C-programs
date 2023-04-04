/* Program to count frequency of each element of array in C*/
#include<stdio.h>
int main()
{
int a[100],b[100],i,j,n,count=0;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
count=1;
if(a[i]!=-1)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
a[j]=-1;
}
}
b[i]=count;
}
}

for(i=0;i<n;i++)
{
if(a[i]!=-1)
{
printf("number of %d is %d\n",a[i],b[i]);
}
}
return 0;
}


/*OUTPUT IS: Enter array size: 5
Enter array elements: 1 3 1 3 2
number of 1 is 2
number of 3 is 2
number of 2 is 1

*/
