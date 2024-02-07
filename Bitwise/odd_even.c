#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the least significant bit (LSB) is set or not
    if (number & 1) {
        printf("%d is an odd number.\n", number);
    } else {
        printf("%d is an even number.\n", number);
    }

    return 0;
}

/*OUTPUT is: 
Enter a number: 
56
Num 56 is Even

Enter a number: 
7
Num 7 is odd:
*/
