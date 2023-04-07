/*Compare two strings without using strcmp() function */
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
for(n1=0;s1[n1]!='\0';n1++);
for(n2=0;s2[n2]!='\0';n2++);
if(n1!=n2)//if str1 length and str2 lengths are not equal
{
printf("Strings are not equal");
exit(0);
}
else
{
for(i=0;i<n1;i++)//checking for each char  same or not
{
if(s1[i]!=s2[i])//if string characters are not same
{
break;
}
}
if(i==n1)
printf("Strings are match");
else
printf("Strings are not match");
}
}

/*
OUTPUT IS: Enter a string1 Srimanth
Enter a string2 Sriimannth
Strings are not equal
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./cts
Enter a string1Srimanth
Enter a string2gaddamaa
Strings are not match
user@DESKTOP-IL6OQ24 ~/Cprograms
$ ./cts
Enter a string1 Srimanth
Enter a string2 Srimanth
Strings are match
*/
