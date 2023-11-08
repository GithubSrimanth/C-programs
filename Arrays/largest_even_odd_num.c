// Find largest even number and largest odd number in c
#include<stdio.h>
int main()
{
    int num[5],i,even=0,odd=0;
    printf("Enter numbers:\n");
           for(i=0;i<5;i++)
           {
           scanf("%d",&num[i]);
       }
           for(i=0;i<5;i++)
           {
           if(num[i]%2==0 && num[i]>even)
           {
           even=num[i];
       }
           if(num[i]%2!=0 && num[i]>odd)
           {
           odd =num[i];
       }
       }
           printf("Largest even num is: %d\n",even);
           printf("Largest odd num is: %d\n",odd);
           return 0;
       }

/*OUTPUT IS: 
Enter numbers:
1
2
3
4
5
Largest even num is: 4
Largest odd num is: 5

*/
