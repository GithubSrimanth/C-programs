/*Count a  number of Vowels and Consonants in a given string*/
#include<stdio.h>
void main()
{
char str[100];
int i,c1=0,c2=0;
printf("Enter a string: ");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
c1++;
else
c2++;
}
printf("\n Vowel=%d",c1);
printf("\n Consonant=%d",c2);
}

/*OUTPUT IS: Enter a string: srimanth

 Vowel=2
 Consonant=6
 Enter a string: gaddam

 Vowel=2
 Consonant=4 */
