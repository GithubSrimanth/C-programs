//Reverse a string using pointers with help of function concept

#include <stdio.h>
#include <string.h>

void revstr(char *str1, char *str2) {
    char *p1,*p2;
    p1 = str1 + strlen(str1) - 1;
    p2 = str2;
    while (p1 >= str1) {
        *p2 = *p1;
        p2++;
        p1--;
    }
    *p2 = '\0';
}

void main() {
    char str1[50], str2[50];
    printf("Enter a string: ");
    gets(str1);
    revstr(str1,str2);

    printf("Original string is: %s\n", str1);
    printf("Reversed string is: %s\n", str2);


}

/*

OUTPUT IS:
Enter a string: Srimanth Gaddam Gagan
Original string is: Srimanth Gaddam Gagan
Reversed string is: nagaG maddaG htnamirS

*/
