// Check whether bitwise AND of N numbers is Even or Odd
#include<stdio.h>
int main()
{
    int n,i;
    int number[100];
    int result =1;
    printf("Enter number of integers:\n");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for(i =0;i<n;i++)
    {
        scanf("%d",&number[i]);
    result =result & number[i];
    }
    
    if(result & 1)
    {
        printf("Bitwise AND of N number is odd\n");
    }
    else
    {
        printf("Bitwise AND of N number is even\n");
    }
    return 0;
}

/*OUTPUT IS:
Enter number of integers:
4
Enter 4 numbers: 1
3
4
6
Bitwise AND of N number is even

Enter number of integers:
2
Enter 2 numbers: 3
5
Bitwise AND of N number is odd
*/
