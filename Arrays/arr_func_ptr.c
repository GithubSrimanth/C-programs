#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}

int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    int(*fp_arr[4])(int a,int b);
    fp_arr[0]= &add;
    fp_arr[1]= &sub;
    fp_arr[2]= &mul;
    fp_arr[3]= &div;
        
    for(int i=0;i<4;i++)
    {
        int result = (*fp_arr[i])(a,b);
        printf("Result is: %d\n", result);
    }
    return 0;
}

/*OUTPUT IS:
Enter two numbers: 
6
2
Result is: 8
Result is: 4
Result is: 12
Result is: 3
*/
