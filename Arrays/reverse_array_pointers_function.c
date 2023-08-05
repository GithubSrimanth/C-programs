// Reverse array elements using pointers with function concepts
#include<stdio.h>
void reverse(int *,int);
int main()
{
    int arr[5],i,n;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter array eles: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
return 0;
    
}
void reverse(int *ptr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",*(ptr+i));
    }
}

OUTPUT IS: /*Enter size: 
5
Enter array eles: 1
2
3
4
5
54321
*/

(or)

//################################################################################################################
#include<stdio.h>
void reverse(int *);
int main()
{
    int arr[5],i;
    printf("Enter array eles: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr);
return 0;
    
}
void reverse(int *ptr)
{
    for(int i=5-1;i>=0;i--)
    {
        printf("%d",*(ptr+i));
    }
}

OUTPUT IS:/*Enter array eles: 1
2
3
4
5
54321*/
