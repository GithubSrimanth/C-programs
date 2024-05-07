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
