// WAP to convert upper cases to lower cases as well as lower cases to upper cases 
#include<stdio.h>
void convert(char *str)
{
    while(*str)
    {
        if(*str >='A' && *str <='Z')
        {
            *str = *str + ('a' - 'A');
        }
        else if(*str >='a' && *str <='z')
        {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}
void main()
{
    char str[50];
    printf("Enter strings: \n");
    gets(str);
    convert(str);
    printf("Display the converted string is : %s\n", str);
}

output:
/*
Enter strings: 
SrImAnTh
Display the converted string is : sRiMaNtH

Enter strings: 
fdhjfkjkdsgjSFHASDHFJDSFFDSJFJK  
Display the converted string is : FDHJFKJKDSGJsfhasdhfjdsffdsjfjk

*/


// Convert upper case letters to lowercase letters using library function
#include<stdio.h>
#include<ctype.h>
void convert(char *str)
{
    while(*str)
    {
        if(isupper(*str))
        {
            *str=tolower(*str);
        }
        else if(islower(*str))
        {
            *str=toupper(*str);
        }
        str++;
    }
}

void main()
{
    char str[10];
    printf("Enter a string: \n");
    gets(str);
    convert(str);
    printf("After converted string is: %s\n", str);
}

