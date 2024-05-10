/*Reverse the given string using recursive function */

// Reverse a string using recursion function
#include<stdio.h>
#include<string.h>
int reverse(char str[], int i, int j)
{
    
    if(i<j)
   {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
   
   reverse(str, i+1, j-1);
   }
}

int main()
{
    char str[50]="Srimanth";
    int n= strlen(str);
    reverse(str, 0, n-1);
    printf("Reversed string is: %s", str);
    return 0;
}



#############################################################################################################################
#include <stdio.h>

// Function to reverse a string using recursion
void reverseString(char *str) {
    if (*str == '\0')
        return; // Base case: if the string is empty, return
    
    reverseString(str + 1); // Recursively call the function with the next character
    
    printf("%c", *str); // Print the current character after all the recursive calls have returned
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    reverseString(str);
    printf("\n");

    return 0;
}



/* OUTPUT IS: $ ./rs
Enter a string: srimanth gaddam
maddag htnamirs
*/
