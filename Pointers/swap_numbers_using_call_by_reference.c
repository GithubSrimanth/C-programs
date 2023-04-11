/*Swap numbers using call by reference in pointers*/
#include<stdio.h>
void swap(int *, int *);
int main()
{
int a,b;
printf("Enter a and b values: ");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("a and b values are %d %d",a,b);
return 0;
}

void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp; 
printf("x and y values are %d %d\n",*x,*y);
}

/*OUTPUT IS : Enter a and b values: 20 80
x and y values are 80 20
a and b values are 80 20
*/
