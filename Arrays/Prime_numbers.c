// Print the prime numbers in  n number of integer values using c
#include <stdio.h>

// Function to check whether a number is prime or not
int isPrime(int num) {
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // if the number is divisible by any number other than 1 and itself, it's not prime
    }
    
    return 1; // if the number is not divisible by any number other than 1 and itself, it's prime
}

int main() {
    int arr[50],n;
    printf("Enter the range: ");
    scanf("%d", &n);
printf("Enter numbers\n");
for(int i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
    printf("Prime numbers up to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

OUTPUT:
Enter the range: 10
Enter numbers
1
2
3
4
5
6
7
8
9
10
Prime numbers up to 10 are: 2 3 5 7 



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
