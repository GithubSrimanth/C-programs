/*Reverse the given string using function in C*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[9]="Srimanth";
    int n=strlen(str);
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    printf("After reversed the string is: %s\n", str);
}
/*OUTPUT IS: 
After reversed the string is: htnamirS
*/
##################################################################################################
#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
printf("Enter a string: ");
gets(str);
reverseString(str);
printf("Reversed string: %s\n", str);
}
void reverseString(char str[])
{
    int i,j,n,temp;
for(n=0;str[n]!='\0';n++);//n is length of the string
for(i=0,j=n-1;i<j;i++,j--)
{
t=str[i];
str[i]=str[j];
str[j]=t;
}
}

/*OUTPUT IS:
Enter a string: srimanth gaddam
maddag htnamirs
*/
