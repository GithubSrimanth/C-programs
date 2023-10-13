//Print the given strings without white spaces or remove white spaces in the given string

#include<stdio.h>
int main()
{
    char str[]="my name is srimanth";
    char str1[20];
    int i=0,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str1[j]=str[i];
            j++;
        }
    }
    str1[j]='\0';

    printf("After removed white spaces of string is: %s\n",str1);
}

/*OUTPUT IS:
After removed white spaces of string is: mynameissrimanth
*/
