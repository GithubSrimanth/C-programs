// Write a program to check an integer is a power of 2 using bitwise operators
#include <stdio.h>

int main() {
    int number;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is a power of 2
    if ((number > 0) && ((number & (number - 1)) == 0)) {
        printf("%d is a power of 2.\n", number);
    } else {
        printf("%d is not a power of 2.\n", number);
    }

    return 0;
}

###################################################################################################


// Here this is using General C program logic
#include<stdio.h>
#include<stdbool.h>
bool ispoweroftwo(int num)
{
    if(num<=0) {
        return false;
    }
    while(num>1) {
        if(num%2!=0) {
            return false;
        }
        num=num/2;
    }
    return true;
}
int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(ispoweroftwo(num)) {
        printf("Number %d is power of two\n",num);
    } else {
        printf("Number %d is not power of two\n",num);
    }
}

/*OUTPUT IS: 
 Enter a number: 
32
Number 32 is power of two
Enter a number: 
5
Number 5 is not power of two
Enter a number: 
8
Number 8 is power of two
*/
