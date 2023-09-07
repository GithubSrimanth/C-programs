#include<stdio.h>
void decTobin(int dn)
{
    int binary[32];
    int n=0;
    while(dn>0)
    {
        binary[n]=dn%2;
        dn/=2;
        n++;
    }
    printf("After binary representaion\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",binary[i]);
    }
    printf("\n");
}
void main()
{
    int dn=5;
    decTobin(dn);
}

/*OUTPUT IS: 
After binary representaion
101
*/
