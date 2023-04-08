/*Compare two strings using function*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
char s1[500],s2[500];
int i,n1,n2;
printf("Enter a string1");
gets(s1);
printf("Enter a string2");
gets(s2);
if(equal(s1,s2)==1)
printf("Strings are equal");
else
printf("Strings are not equal");
}
int equal(char *s1, char *s2)
{
int n1,n2,i;
for(n1=0;s1[n1]!='\0';n1++);
for(n2=0;s2[n2]!='\0';n2++);
if(n1!=n2)
{
return 0;
}
else
{
for(i=0;i<n1;i++)//check char by char whether it is same or not
{
if(s1[i]!=s2[i])//if string characters are not same
return 0;
}
return 1;
}
}

/*OUTPUT IS: Enter a string1Srimanth
Enter a string2Gaddam
Strings are not equal
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./ctsf
Enter a string1Srimanth
Enter a string2Sremanth
Strings are not equal
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./ctsf
Enter a string1Srimanth
Enter a string2Srimanth
Strings are equal
*/
