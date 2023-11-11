// Check whether two Strings are Anagram of each other.
#include <stdio.h>
#include <string.h>

// Function prototype
int areAnagrams(const char *str1, const char *str2);

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    gets(str1);
    
    printf("Enter the second string: ");
    gets(str2);

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }

    return 0;
}

// Function definition to check if two strings are anagrams
int areAnagrams(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Anagrams must have the same length
    if (len1 != len2) {
        return 0; // Not anagrams
    }

    // Initialize an array to count occurrences of characters
    int count[256] = {0};

    // Count occurrences in the first string
    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
    }

    // Decrement occurrences in the second string
    for (int i = 0; i < len2; i++) {
        count[str2[i]]--;
    }

    // If all counts are zero, the strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}


/*OUTPUT IS: 
Enter the first string: Listen#24
Enter the second string: Silent24#
Listen#24 and Silent24# are not anagrams.


Enter the first string: Silent
Enter the second string: liSten
Silent and liSten are anagrams.

*/
