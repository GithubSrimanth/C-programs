/*C program copy the given string using pointers*/
#include<stdio.h>
void main()
{
    char s1[50],s2[50];
    char *p1,*p2;
    printf("Enter a string: ");
    gets(s1);
    p1=s1;
    p2=s2;
    str_copy(s2,s1);
    printf("Source string is:%s\n",s1);
    printf("Destination string is:%s\n",s2);
}
void str_copy(char *p2, char *p1)
{
    while(*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
}

/*OUTPUT IS: 
Enter a string: Gagan
Source string is:Gagan
Destination string is:Gagan
*/
