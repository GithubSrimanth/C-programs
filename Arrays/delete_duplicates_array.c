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
for(k=j;k<n;k++)
{
a[k]=a[k+1];
}
n--;
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
