/* C Program to demonstrate example of left shift (<<) operator.*/

#include <stdio.h>

int main()
{

    unsigned int num = 0xff;

    printf("\nValue of num = %04X before left shift.", num);

    num = (num << 1);//shifting 1 byte left
    printf("\nValue of num = %04X after left shift.", num);

    return 0;
}

/*OUTPUT IS: 
Value of num = 00FF before left shift.
Value of num = 01FE after left shift.
*/
