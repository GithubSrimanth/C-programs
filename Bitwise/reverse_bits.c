// Write an Efficient C Program to Reverse Bits of a Number

#include<stdio.h>
unsigned int reversebits(unsigned int num)
{
   unsigned int reversednum = 0;
    unsigned int i;
    unsigned int size = sizeof(int);//if we want 32 bits then sizeof(int)*8;
    for(i=0; i<size; i++) {
        if(num & (1<<i)) {
            reversednum = reversednum | (1<< (size-1)-i);
        }
    }

    return reversednum;
}

int main()
{
    unsigned int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    unsigned int reversednum = reversebits(num);
    printf("Original num is: %d\n", num);
    printf("Reversed num is: %d\n", reversednum);
    return 0;
}

/*OUTPUT IS:
Enter a number: 
5
Original num is: 5
Reversed num is: 10

Enter a number: 
6
Original num is: 6
Reversed num is: 6

Enter a number: 
8
Original num is: 8
Reversed num is: 1

Enter a number: 
3
Original num is: 3
Reversed num is: 12
*/
