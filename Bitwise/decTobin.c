// Decimal to binary conversion using bitwise operators
#include<stdio.h>
void decTobin(int dn)
{
    int binary[32];
    int n=0;
    while(dn>0)
    {
        binary[n]=dn & 1;// or dn % 2;
        dn=dn>>1;
        n++;
    }
    printf("Binary representation is: \n");
    for(int i= n-1; i>=0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void main()
{
    int dn;
    printf("Enter a decimal number: \n");
    scanf("%d",&dn);
    decTobin(dn);
}

/*OUTPUT IS: 
Enter a decimal number: 
13
Binary representation is: 
1101
*/
