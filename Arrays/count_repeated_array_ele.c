/* C program to Count the repeated array elements*/
#include<stdio.h>
void main()
{
int a[100],i,n,j,count;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==0)
continue;
if(a[i]==a[j])
{
count++;
a[j]=0;
}
}
if(count>1)
printf("%d repeated %d times",a[i],count);
}
}

/*OUTPUT IS: $ gcc countrepeatedarrayele.c -o crae

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./crae
Enter array size: 6
Enter array elements: 20 50 30 20 50 30
20 repeted 2 times50 repeted 2 times30 repeted 2 times
*/
