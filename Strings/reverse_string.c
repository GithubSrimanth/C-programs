#include<stdio.h>
#include<string.h>
void reverse(char *a)//define the func reverse, here pass the array so, func parameter would be char pointer
{
if(*a)// to print upto the last char of the string input
{
reverse(a+1);// it will move to the next character
printf("%c",*a);// it will print from the last
}
}
int main()
{
char a[100];
printf("Enter a string: ");
//scanf("%[^\n]s",a);
gets(a);
reverse(a);//recursive func call
return 0;
} 

/* OUTPUT IS: $ ./rs
Enter a string: srimanth gaddam
maddag htnamirs
*/
