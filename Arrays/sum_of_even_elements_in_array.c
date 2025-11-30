// Sum of Even and Odd numbers logic in single code
#include<stdio.h>
void main()
{
    int arr[50];
    int n,even=0,odd=0,sum1=0,sum2=0;
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum1 =sum1+ arr[i];
        }
        else if(arr[i]%2==1)
        {
            sum2 =sum2 + arr[i];
        }
    }
    printf("Sum of Even numbers: %d\n", sum1);
    printf("Sum of Odd numbers: %d\n", sum2);
}

########################################################
/*Sum of even array elements*/
#include<stdio.h>
void main()
{
int a[100],i,n,sum=0;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
sum=sum+a[i];
}
printf("sum of even numbers = %d",sum);
}

/*OUTPUT is: $ ./sea
Enter array size: 5
Enter array elements: 30 50 32 23 12
sum of even numbers = 124
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./sea
Enter array size: 6
Enter array elements: 23 40 78 45 13 50
sum of even numbers = 168
*/
