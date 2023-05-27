/*Write a string copy program using normal function*/
#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter a string: ");
    gets(str1);
    strcpy(str2,str1);
printf("copied string is:%s\n",str2);
}
void strcpy(char str2[], char str1[])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
}

/* OUTPUT IS: 
Enter a string: srimanth gaddam
copied string is: srimanth gaddam
*/
