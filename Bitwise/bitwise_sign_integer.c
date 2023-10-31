// Compute the sign of an integer using Bitwise operators
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    if(num & (1 << sizeof(int)* 8 -1)) // or num & (1 << 31)
    {
        printf("Negative");
    }
    else if(num == 0)
    {
        printf("zero");
    }
    else
    {
        printf("Positive");
    }
    return 0;
}


/*OUTPUT IS: 
Enter an integer:
-1
Negative

*/
