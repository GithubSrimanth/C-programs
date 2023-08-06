/*#include<stdio.h>
void main()
{
int a[5],b[5],i,n;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}

for(i=0;i<n;i++)
{
b[i]=a[i];
}
printf("first array elements");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("Copied array elements");
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
}*/

#include<stdio.h>
void main()
{
int a[50],b[50],i,n;
printf("Enter array size\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
{
    scanf("\n%d",&a[i]);
}
for(i=0;i<n;i++)
{
    b[i]=a[i];
}

/*printf("\nPrint first array elements");
for(i=0;i<n;i++)
{
    printf("\n%d",a[i]);
}*/

printf("Copied array elements\n");

    for(i=0;i<n;i++)

printf("%d\n",b[i]);
}

OUTPUT IS: /*
Enter size: 5
Enter array eles: 1
2
3
4
5
after copied array eles: 12345
*/
