// WAP to set ,clear,toggle and check status of bit in c
#include <stdio.h>

// Function to set a bit at a given position
int setBit(int num, int pos) {
    return num | (1 << pos);
}

// Function to clear a bit at a given position
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

// Function to toggle a bit at a given position
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

// Function to check the status of a bit at a given position
int checkBit(int num, int pos) {
    return (num >> pos) & 1;
}

int main() {
    int num = 10; // Example number
    int pos = 0; // Example position (0-indexed)

    // Set bit at position 'pos'
    printf("After setting bit at position %d is %d\n", pos, setBit(num, pos));

    // Clear bit at position 'pos'
    printf("After clearing bit at position %d is %d\n", pos, clearBit(num, pos));

    // Toggle bit at position 'pos'
    printf("After toggling bit at position %d is %d\n", pos, toggleBit(num, pos));

    // Check status of bit at position 'pos'
    printf("Bit at position %d is %s\n", pos, checkBit(num, pos) ? "set" : "not set");

    return 0;
}

/*OUTPUT IS: 

After setting bit at position 0 is 11
After clearing bit at position 0 is 10
After toggling bit at position 0 is 11
Bit at position 0 is not set

*/
