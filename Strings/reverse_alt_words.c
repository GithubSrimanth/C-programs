// Reverse the alternate words given string

#include <stdio.h>
#include <string.h>

// Function to reverse a portion of a string
void reverse_str(char *ptr1, char *ptr2) {
    while (ptr1 < ptr2) {
        char temp = *ptr1;
        *ptr1++ = *ptr2;
        *ptr2-- = temp;
    }
}

// Function to reverse alternate words in a sentence
void reverse_alt_words(char *str) {
    int wordCount = 0; // To keep track of word positions
    char *ptr1 = str; // Pointer to the start of the current word
    char *ptr2= str;   // Pointer to traverse the string

    while (*ptr2!='\0') {
        while (*ptr2 && *ptr2 != ' ') { // Move 'end' to the end of the current word
            ptr2++;
        }
        if (wordCount % 2 == 1) { // If word position is odd, reverse the word
            reverse_str(ptr1, ptr2 - 1);
        }
        wordCount++; // Increment word count
        if (*ptr2!='\0') { // Move to the next word
            ptr2++;
        }
        ptr1 = ptr2; // Set start to the beginning of the next word
    }
}

int main() {
    char str[50] = "My name is srimanth";

    printf("Original string: %s\n", str);
    reverse_alt_words(str);
    printf("Reversed alternate words: %s\n", str);

    return 0;
}



OUTPUT:
Original string: My name is srimanth
Reversed alternate words: My eman is htnamirs
