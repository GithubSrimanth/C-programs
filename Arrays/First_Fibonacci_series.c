// Program to print first n Fibonacci Number series  (input -9, output- 0 1 1 2 3 5 8 13 21) 
#include <stdio.h>

void printFibonacci(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("First %d Fibonacci numbers: ", n);

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}



/*OUTPUT IS: 
Enter n numbers: 
9
Enter first 9 fibonacci numbers: 
01123581321
*/


#####################################################################

#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("First %d Fibonacci numbers: ", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}
