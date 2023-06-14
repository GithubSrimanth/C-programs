/*write a c program for the given string is Palindrome or not */
#include<stdio.h>
int main()
{
    char str[100];
    int i,n;
    gets(str);
    if(ispalindrome(str)==1)
    {
        printf("str is palindrome");
    }
    else
    {
        printf("Str is not palindrome");
    }
    return 0;
}
 
 int ispalindrome(char *s) 
 {
     int i,n;

     for(n=0;s[n]!='\0';n++);
     for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
        {
            return 0;            
        }
        return 1;
            
    }
}

/*OUTPUT IS: 
abcabc
Str is not palindrome
*/
