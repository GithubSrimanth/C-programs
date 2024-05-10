// Find factorial number using recursion function 
#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int num;
    
    printf("Enter a factorial number\n");
    scanf("%d", &num);
    
    
    printf("%d Factorial number is %d\n", num, factorial(num));
    
    return 0;   
}

OUTPUT is:
Enter a factorial number
5
5 Factorial number is 120
