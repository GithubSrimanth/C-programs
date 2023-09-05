// copy array elements using pointers
#include<stdio.h>
void main()
{
    int arr[6]={1,2,3,4,5,6};
    int arr1[6],n=6;
    int *p1=arr;
    int *p2=arr1;
    for(int i=0;i<n;i++)
    {
        *p2=*p1;
        p2++;
        p1++;
    }
    printf("After copied array");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr1[i]);
    }
    printf("\n");
}

/* OUTPUT IS:
After copied array
1
2
3
4
5
6
*/
