// return sum of two integer numbers using function pointers
#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a=5,b=2;
    int (*fp)(int,int);
    fp=&sum;
    int result =(*fp)(a,b);
    printf("Sum is: %d",result);
    return 0;
}
/*
OUTPUT IS: 
Sum is: 7
  */
