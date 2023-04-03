// C program to print the total of non-repeated elements of an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = { 1, 2, 3, 2, 2, 5, 6, 1 };

    int i= 0;
    int j= 0;
    int count=0;

    for (i= 0; i< 8; i++) 
	{
        for (j = 0; j< 8; j++)
 	{
            if (arr[i] == arr[j] && i!= j)
                break;
        }
        if (j== 8) 
        {
    	count=count+1;
    	}
    	}  
   printf("Total non-repeated elements are: %d\n",count);
   return 0;     
}
   
/*OUTPUT IS: $ gcc total_of_non_repeated_elements_of_array.c -o tnre

user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./tnre
Total non-repeated elements are: 3

*/
