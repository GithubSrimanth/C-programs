/*Second smallest element in an array*/
#include<stdio.h>
#include<limits.h>
void main()
{
int a[100],i,s1,s2,n;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

s1=INT_MAX;
s2=INT_MAX;
for(i=0;i<n;i++)
{
if(a[i]<s1)
{
s2=s1;
s1=a[i];
}
else if(a[i]<s2 && a[i]>s1)
{
s2=a[i];
}
}
printf("first smallest number is : %d",s1);
printf("\nSecond smallest number is : %d",s2);
}





/*OUTPUT is: $ gcc secondsmallestnumber.c -o ssn

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./ssn
Enter array size: 5
Enter array elements: 20 58 60 15 90
first smallest number is : 15
Second smallest number is : 20
*/
