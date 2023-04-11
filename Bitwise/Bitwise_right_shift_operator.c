/* C Program to demonstrate example right shift (>>) operator.*/

#include <stdio.h>

int main()
{

    unsigned int num = 0xff;

    printf("\nValue of num = %04X before right shift.", num);

    num = (num >> 2); //shifting 2 bytes right
    printf("\nValue of num = %04X after right shift.", num);

    return 0;
}


/*OUTPUT IS: 
Value of num = 00FF before right shift.
Value of num = 003F after right shift.
*/
