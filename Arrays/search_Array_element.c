//WAP for search a element in array
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int size, i, se;
    int a[MAX_SIZE];
    int found = 0; // flag to check if element is found

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter search element: ");
    scanf("%d", &se);

    for(i = 0; i < size; i++)
    {
        if(a[i] == se)
        {
            printf("Search element %d found at position %d\n", se, i);
            found = 1;
            break; // stop searching after finding
        }
    }

    if(found==0)
    {
        printf("Search element %d is not found\n", se);
    }

    return 0;
}

OUTPUT:
Enter array size: 5
Enter array elements: 1
2
3
4
5
Enter search element: 7
Search element 7 is not found

Enter array size: 5
Enter array elements: 1
2
3
4
5
Enter search element: 4
Search element 4 found at position 3
