#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int multiplied = number << 1;  // Multiply by 2 using left shift
    int divided = number >> 1;    // Divide by 2 using right shift

    printf("Original number: %d\n", number);
    printf("Multiplied by 2: %d\n", multiplied);
    printf("Divided by 2: %d\n", divided);

    return 0;
}

/*OUTPUT IS: 
Enter a number: 
5
Orginal num is: 5
multiply a number by 2: 10
Divide a number by 2: 2


Enter a number: 
6
Orginal num is: 6
multiply a number by 2: 12
Divide a number by 2: 3
*/
