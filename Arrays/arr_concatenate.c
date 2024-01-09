//WAP for array concatenation
#include<stdio.h>
void main()
{
    int a[4];
    int b[5];
    int i,m,n;
    int j=0;
    printf("Enter a size:\n");
    scanf("%d",&m);
    
    printf("Enter a elements: \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter b size:\n");
    scanf("%d",&n);
    
    printf("Enter b elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int z=m+n;
    
    for(i=m;i<z;i++)
    {
        a[i]=b[j];
        j++;
    }
    printf("After concatenate the arrays\n");
    for(i=0;i<z;i++)
    {
    printf("%d",a[i]);
    }
}

output:
/*
Enter a size:
4
Enter a elements: 
1
2
3
4
Enter b size:
5
Enter b elements: 
5
6
7
8
9
After concatenate the arrays
123456789
*/
