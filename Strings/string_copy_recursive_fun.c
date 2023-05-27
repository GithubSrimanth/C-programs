/*C program for copy a given string using recursion function */
#include<stdio.h>
void main()
{
    char s1[50],s2[50];
    printf("ENTER a string: ");
    gets(s1);
    str_copy(s2,s1,0);
    printf("Source str1 is:%s\n",s1);
    printf("Destination str2 is:%s\n",s2);
}
void str_copy(char s2[],char s1[],int i)
{
    s2[i]=s1[i];
    if(s1[i]=='\0')
    {
        return;
    }
    else
    {
        str_copy(s2,s1,i+1);//recursion fun call
    }
}
