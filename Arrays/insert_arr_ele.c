// Insert an array element in the specific position using c
#include <stdio.h>

int main() {
    int a[4],i,pos,ele,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position index value\n");
    scanf("%d",&pos);
    printf("Enter element value\n");
    scanf("%d",&ele);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;
    printf("After inserted array ele\n");
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}


OUTPUT is: 
/*
Enter array size
4
Enter array elements
1
2
3
4
Enter position index value
3
Enter element value
10
After inserted array ele

1
2
3
10
4
*/
