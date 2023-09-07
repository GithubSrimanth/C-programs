// CONVERT Decimal number to Octal number
#include<stdio.h>
void decTooct(int decnum)
{
    int octal[32];
    int n=0;
    while(decnum>0)
    {
        octal[n]=decnum%8;
        decnum/=8;
        n++;
    }
    printf("After Octal representaion\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",octal[i]);
    }
    printf("\n");
}
void main()
{
    int decnum=5;
    decTooct(decnum);
}


/*OUTPUT IS:
After Octal representaion
5
*/
