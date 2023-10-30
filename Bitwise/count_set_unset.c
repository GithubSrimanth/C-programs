//Write a program to count set bits in an integer and Count unset bits in an integer
#include<stdio.h>
int count_set(int num)
{
    int count =0;
    while(num)
    {
    count += num&1;
    num >>=1;
    }
    return count;
}

int count_unset(int num)
{
    int count =0;
    while(num)
    {
        count += !(num & 1);
        num >>=1;
    }
    return count;
}


int main()
{
    int num=5;
    int set = count_set(num);
    int unset = count_unset(num);
    printf("The count of setbits in %d: %d\n",num, set);
    printf("The count of unset bits in %d: %d\n",num, unset);
    return 0;
}

/*output is:
The count of setbits in 5: 2
The count of unset bits in 5: 1
*/







(or)
//2nd Method of count set and count unset bits

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=2,set=0,unset=0;
    int size=8*sizeof(int);
    printf("%d", size);
    for(int i=0;i<size;i++)
    {
        if((num>>i)&1)
        set++;
        else
        unset++;
    }
    printf("set =%d unset=%d",set,unset);
    return 0;
}

/*output is:
32set =2 unset=30
*/
