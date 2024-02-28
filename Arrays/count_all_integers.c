// Find the occurence of all integer in array 


#include <stdio.h>

#define MAX_SIZE 100

void countOccurrences(int arr[], int size) {
    int counts[MAX_SIZE] = {0}; // Initialize counts to zero
    printf("Occurrences of each integer in the array:\n");

    // Count occurrences of each integer
    for (int i = 0; i < size; i++) {
        counts[arr[i]]++;
    }

    // Print occurrences
    for (int i = 0; i < MAX_SIZE; i++) {
        if (counts[i] > 0) {
            printf("%d occurs %d times\n", i, counts[i]);
        }
    }
}

int main() {
    int arr[] = {2, 3, 4, 5, 2, 3, 1, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    countOccurrences(arr, size);

    return 0;
}



/*OUTPUT IS: 
Enter array size: 
10
Enter array elements: 
1
2
3
3
5
4
5
6
7
7
Occurences of each integer in array 
1 occurs 1 times 
2 occurs 1 times 
3 occurs 2 times 
4 occurs 1 times 
5 occurs 2 times 
6 occurs 1 times 
7 occurs 2 times 
*/
