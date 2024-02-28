//Find all duplicates in an array and delete the duplicate elements
#include<stdio.h>
void main()
{
    int arr[50],n,count,i,j;
    printf("Enter array size: \n");
    scanf("%d",&n);
    
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         
        count =1;
         
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==0)
            continue;
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
    

    if(count>1)
    
        printf("%d is repeated %d times\n", arr[i], count);
    
    }
    printf("After Removing duplicate elements an array is: \n");
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            printf("\n%d", arr[i]);
        }
    }
}

/*
OUTPUT IS: 
Enter array size: 
5
Enter array elements: 
1
2
3
2
1
1 is repeated 2 times
2 is repeated 2 times
After Removing duplicate elements an array is: 

1
2
3
*/
