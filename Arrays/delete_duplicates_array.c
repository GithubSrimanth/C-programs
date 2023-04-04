/*Write a C program to Delete duplicate elements from an array of integers*/
#include<Stdio.h>
int main()
{
int a[100],n,i,j,k;
printf("Enter array size:");

scanf("%d",&n);
printf("Enter %d ele",n );
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)//   each and every elements are shifted one position to left from j+1 to j like this, for that we have taken k for loop. 
{
a[k]=a[k+1];// a[j]=a[j+1] replaced with a[k]=a[k+1]
n--;//size will be decrease
j--;
}
}
}

for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
