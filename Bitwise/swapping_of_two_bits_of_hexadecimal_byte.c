/*
Program to swap 1st and 2nd bit of hexadecimal value stored in data variable
*/
#include <stdio.h>
int main()
{
    unsigned char data = 0xD; // Assiging hexadecimal value

    unsigned char bit_1 = (data >> 1) & 1;   //Get 1st bit from data

    unsigned char bit_2 = (data >> 2) & 1;   //Get 2nd bit from data

    unsigned char xor_of_bit = bit_1 ^ bit_2;  // Get XOR of bit_1 and bit_2

    printf("After swapping the bits, data value is: %2X", data ^ (xor_of_bit << 1 | xor_of_bit << 2));

    return 0;
}

/*OUTPUT IS:
After swapping the bits, data value is:  B
*/
