/*swap_numbers through the call_by_ value using functions*/

#include<stdio.h>

void swap(int ,int);
void main()
{
int a=30,b=50;
printf("Before swap a=%d b=%d",a,b);
swap(a,b);
}

void swap(int x, int y)
{
int temp;
temp= x;
x=y;
y=temp;
printf("\nAfter swap x=%d y=%d",x,y);
}



/*OUTPUT IS: 
Before swap a=30 b=50
After swap x=50 y=30

*/
