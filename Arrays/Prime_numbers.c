// Print the prime numbers in  n number of integer values using c
#include<stdio.h>
int isprime(int n)
{
    if(n<2)
    {
        return 0;
    }
    else
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int arr[50];
    int n;
    printf("Enter a size: \n");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    {
        printf("Enter a number: \n");
        scanf("%d", &arr[i]);
        if(isprime(arr[i]))
        {
            printf("%d Number is prime\n",arr[i]);
        }
        else
        printf("%d Number is not prime\n", arr[i]);
    }
}


###############################################################
#include<stdio.h>
int isprime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int r;
    printf("Enter range of number: \n");
    scanf("%d", &r);
    
    
    printf("Prime numbers up to %d\n", r);
    for(int i=2;i<=r;i++)
    {
        if(isprime(i))
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

OUTPUT:
Enter range of number: 
10
Prime numbers up to 10
2
3
5
7

    #########################################################################################
    Another logics of Prime numbers
#include<stdio.h>
int isprime(int num)
{
    if(num<=1)
    return 0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int n, num;
    printf("Enter range of values: \n");
    scanf("%d", &n);
    
   for(int i=0;i<=n;i++)
   {
       printf("Enter a number: \n");
       scanf("%d", &num);
       if(isprime(num))
       printf("%d is a Prime number\n", num);
       else
       printf("%d is not a Prime number\n", num);
   }
    return 0;
}

Output:
Enter range of values: 
5
Enter a number: 
0
0 is not a Prime number
Enter a number: 
1
1 is not a Prime number
Enter a number: 
2
2 is a Prime number
Enter a number: 
3
3 is a Prime number
Enter a number: 
4
4 is not a Prime number
Enter a number: 
5
5 is a Prime number


/* Another logic*/
#include<stdio.h>
int isprime(int num)
{
    if(num<=1)
    return 0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter range of values: \n");
    scanf("%d", &n);
    
    printf("Prime numbers up to %d\n", n);
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
        printf("%d", i);
    }
    return 0;
}

output:
Enter range of values: 
5
Prime numbers up to 5
235
