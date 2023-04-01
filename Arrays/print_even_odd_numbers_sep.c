/*Print even and odd numbers separately*/
#include<stdio.h>
int main()
{
int i,j=0,k=0,n;
int a[50],b[50],c[50];
printf("enter array size: ");
scanf("%d",&n);
printf("enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
b[j]=a[i];
j++;
}
else
{
c[k]=a[i];
k++;
}
}
printf("even array is: ");
for(i=0;i<j;i++)
printf("%d\n",b[i]);
printf("Odd array is: ");
for(i=0;i<k;i++)
printf("%d\n",c[i]);
}


/*OUTPUT is: 
$ gcc printevenoddnumbersep.c -o eos

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./eos
enter array size: 6
enter array elements: 30 25 45 60 92 83
even array is: 30
60
92
Odd array is: 25
45
83

*/
