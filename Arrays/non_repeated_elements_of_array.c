// C program to print the non-repeated elements of an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = { 1, 2, 3, 2, 2, 5, 6, 1 };

    int i= 0;
    int j= 0;

    printf("Non repeated elements are: ");
    for (i= 0; i< 8; i++) 
	{
        for (j = 0; j< 8; j++)
 	{
            if (arr[i] == arr[j] && i!= j)
                break;
        }
        if (j== 8) {
            printf("%d", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

/*OUTPUT IS: $ gcc nonrepeatedarrayele.c -o nra

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./nra
Non repeated elements are: 356
*/
