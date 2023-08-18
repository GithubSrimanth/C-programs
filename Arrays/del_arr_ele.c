// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int arr[10];
   int i,pos,ele,n;
   printf("Enter array size: ");
   scanf("%d",&n);
   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Enter pos: ");
   scanf("%d",&pos);
   printf("Enter remove element: ");
   scanf("%d",&ele);
   for(i=pos;i<n-1;i++)
{
    arr[i]=arr[i+1];
}   
printf("After removed ele, the array is: ");
for(i=0;i<n-1;i++)
{
    printf("\n%d",arr[i]);
}

    return 0;
}

OUTPUT IS: /*
Enter array size: 5
Enter array elements: 1
2
3
4
5
Enter pos: 1
Enter remove element: 2
After removed ele, the array is: 
1
3
4
5
*/
