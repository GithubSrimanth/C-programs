/*print Sum of elements through Dynamic memory allocation using malloc() function  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,sum=0,*ptr;
printf("Enter size: ");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
printf("Error! memory is not allocated");
exit(0);
}
printf("Enter elements");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
sum+=(*ptr+i);
}
printf("sum of elements: %d",sum);
free(ptr);
return 0;
}




/*OUTPUT IS: 
Enter size: 10
Enter elements1 2 3 4 5 6 7 8 9 10
sum of elements: 55
*/
