/*C program to swap any two array elements using pointers*/
#include<stdio.h>
int main()
{
int a[50],i,n,temp;
int *ptr = a;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d", &ptr[i]); //a+i
}
temp = *(ptr+0);
*(ptr+0)=*(ptr+1);
*(ptr+1)=temp;
printf("After swap array elements: ");
for(i=0;i<n;i++)
{
printf("%d\t",ptr[i]);
}
}


#####################################################################
#include<stdio.h>
int main()
{
int a[100],i,n,temp;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);//a+i
}
temp = *(a+2);
*(a+2)=*(a+5);
*(a+5)=temp;
printf("After swap array elements: ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}


/* OUTPUT IS: $ gcc swaptwoarrayele.c -o stae

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./stae
Enter array size: 6
Enter array elements: 34 76 98 23 98 54
After swap array elements: 34   76      54      23      98      98
*/
