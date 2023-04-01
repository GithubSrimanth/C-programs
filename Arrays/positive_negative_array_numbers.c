/*Positive array and Negative array numbers*/
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
if(a[i]>0)
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
printf(" positive numbers are: ");
for(i=0;i<j;i++)
printf("%d\n",b[i]);
printf("Negative numbers are: ");
for(i=0;i<k;i++)
printf("%d\n",c[i]);
}


/* OUTPUT is: user@DESKTOP-IL6OQ24 ~/Cprograms
$ gcc positivenegativearraynumbers.c -o pn

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./pn
enter array size: 10
enter array elements: 7 99 -1 -4 54 43 20 39 67 20
 positive numbers are: 7
99
54
43
20
39
67
20
Negative numbers are: -1
-4
*/
