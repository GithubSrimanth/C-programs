/*Swap two numbers using Bitwise XOR Operator in C
*/

#include <stdio.h>
void swap(int* a, int* b); //function declaration

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping:  a=%d, b=%d\n", a, b);

    return 0;
}

//function definition
void swap(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

/*OUTPUT IS: Enter first number: 30 60
Enter second number: Before swapping: a=30, b=60
After swapping:  a=60, b=30

*/
