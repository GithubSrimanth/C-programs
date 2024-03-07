// Malloc and realloc function, change the size using realloc function

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int size=5;
    int i;
    
    ptr=(int*)malloc(size * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation is failed\n");
    
    return 1;
    }
    printf("Enter elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &ptr[i]);
    
    }
    for(i=0;i<size;i++)
    {
        ptr[i]=i*3;
    }
    
    printf("\n\n");
    size=10;
    ptr= (int*)realloc(ptr, size * sizeof(int));
    
    if(ptr==NULL)
    {
        printf("Memory allocation is failed\n");
        return 1;
    }
    
    printf("Enter more elements: \n");
    
    for(i=5;i<size;i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    for(i=5;i<size;i++)
    {
        ptr[i]=i+2;
    }
    
    printf("After multiple with 3 and Addition with + 2 then elements are \n");
    
    for(i=0;i<size;i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
    return 0;
}

/*OUTPUT IS: 
Enter elements: 
1
2
3
4
5
Enter more elements: 
6
7
8
9
10
After multiple with 3 and Addition with + 2 then elements are 
0       3       6       9       12      7       8       9       10      11

*/
