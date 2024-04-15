// WAP to check a bit or check the status of particular bit position is SET or UnSET
#include<stdio.h>
void  main()
{
    int num, pos,bit_status;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Enter bit position to check:\n");
    scanf("%d", &pos);
    bit_status = (num & (1<< pos))!=0;
    
    if(bit_status)
    {
        printf("Set the bit at position %d\n", pos);
    }
    else
    {
    printf("Not set the bit at position %d\n", pos);
    }
}

/*OUTPUT IS:
Enter a number: 
5
Enter bit position to check:
0
Set the bit at position 0

Enter a number: 
5
Enter bit position to check:
0
Set the bit at position 0

*/
