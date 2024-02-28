//write a c program to sort the array and then reverse the array

#include<stdio.h>
void sortArr(int arr[], int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

void reverse(int arr[], int n)
{
    int i,j,temp;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        printf("\nAfter reversed array elements: \n");
        for(int i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
}

void main()
{
    int arr[50],n;
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sortArr(arr,n);
    reverse(arr,n);
}


/*OUTPUT IS: 
Enter array size:
5
Enter array elements: 
5
1
9
2
6
Sorted array is: 
12569
After reversed array elements: 
96521
*/
