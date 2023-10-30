// Convert Binary number to decimal number
#include <stdio.h>
#include<math.h>

int main() {
    int i,rem,sum=0;
    long int bin=110;
    /*printf("Enter binary num: \n");
    scanf("%ld",&bin);*/
    i=0;
    while(bin>0)
    {
        rem = bin%10;
        sum=sum+rem*pow(2,i);
        bin=bin/10;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}

(or)
  // Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    int i,rem,sum=0;
    long int bin;
    printf("Enter binary num: \n");
    scanf("%ld",&bin);
    i=0;
    while(bin>0)
    {
        rem = bin%10;
        sum=sum+rem*pow(2,i);
        bin=bin/10;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
/*OUTPUT is:
Enter binary num: 
1000
8



//Enter binary num: 
10
2
//Enter binary num: 
111
7
*/
