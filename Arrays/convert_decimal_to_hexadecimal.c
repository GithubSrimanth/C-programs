// Convert decimal number to Hexadecimal
#include<stdio.h>
void decTohex(int dn)
{
    char hexdec[32];
    int index=0;
    while(dn>0)
    {
        int remainder =dn%16;
        if(remainder < 10)
        {
            hexdec[index]= remainder + '0';
        }
        else
        {
            hexdec[index]= remainder - 10 + 'A';
        }
        dn/=16;
        index++;
    }
    printf("After hexadecimal representation\n");
    for(int i=index -1; i>=0; i--)
    {
        printf("%c",hexdec[i]);
    }
    printf("\n");
}
void main()
{
    int dn=14;
    decTohex(dn);
}


/*OUTPUT IS: 

After hexadecimal representation
E

*/
