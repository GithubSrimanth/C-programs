/* Write a C program to get lowest even number in an array
e.g. - 
input - 1, 8, 2, 5, 7, 9, 4, 10, 2, 3
Ans should be 2

*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int num[10], i, even = INT_MAX;
    printf("Enter numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++) 
    {
        if (num[i] % 2 == 0 && num[i] < even) 
        {
            even = num[i];
        }
        
    }
    if (even != INT_MAX)
    {
        printf("smallest even num is: %d\n", even);
    } 
    else
    {
        printf("No even numbers found.\n");
    }
    
    return 0;
}

/*OUTPUT IS: 
Enter numbers:
1
8
2
5
7
9
4
10
2
3
smallest even num is: 2
*/

