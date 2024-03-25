// Reverse the characters in words in the given string 
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50]="This is Srimanth";
    printf("Original words string: %s\n", str);
    rev_word_str(str);
    printf(" After reversed characters in words:%s\n", str);
}

void rev_word_str(char str[])
{
    int len=strlen(str);
    char temp;
    for(int i=0;i<len/2;i++)
    {
        temp = str[i];
        str[i] = str[len -i -1];
        str[len -i -1]=temp;
    }
}

/*OUTPUT IS: 

Original words string: This is Srimanth
After reversed characters in words:htnamirS si sihT

*/
