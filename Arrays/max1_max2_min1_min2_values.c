// Find 1st max value, 2nd max value and 1st smallest value, 2nd smallest value
#include<stdio.h>
#include<limits.h>
void main()
{
int arr[50];
int n;
printf("Enter size of array: \n");
scanf("%d",&n);
printf("Enter array elements: \n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int min1,min2;
int max1,max2;
min1=min2=INT_MAX;
max1=max2=INT_MIN;
for(int i=0;i<n;i++)
{
    if(arr[i] < min1)
    {
    min2=min1;
    min1=arr[i];
    }
    else if(arr[i] < min2 && arr[i]!=min1)
    {
        min2= arr[i];
    }
}
for(int i=0;i<n;i++)
{
    if(arr[i] > max1)
    {
        max2=max1;
        max1=arr[i];
    }
    else if(arr[i] > max2 && arr[i]!=max1)
    {
        max2= arr[i];
    }
}
printf("1st smallest value is: %d", min1);
printf("\n2nd smallest value is: %d", min2);
printf("\n1st largest value is: %d", max1);
printf("\n2nd largest value is: %d\n", max2);
}

OUTPUT is:
Enter size of array: 
5
Enter array elements: 
12
23
34
45
56
  
1st smallest value is: 12
2nd smallest value is: 23
  
1st largest value is: 56
2nd largest value is: 45
