/*C program to swap two nibbles of a given byte/word*/

#include <stdio.h>

unsigned char swapTwoNibbles(unsigned char n)
{
    unsigned char num;
    num = ((n & 0x0F) << 4 | (n & 0xF0) >> 4);
    return num;
}

int main()
{
    unsigned char number;
    unsigned char revNumber;
    printf("Enter an integer number (One byte number):");
    scanf("%u", &number);

    revNumber = swapTwoNibbles(number);
    printf("\nEntered Number was : %u \nNumber after swapping nibbles : %u", number, revNumber);
    return 0;
}

/*OUTPUT IS: 
Entered Number was : 10
Number after swapping nibbles : 160
*/
