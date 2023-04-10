/*Left rotation and right rotation of a string*/
#include<stdio.h>
#include<string.h>

int main()
{
char str[100];
int n,i,count=0,temp;
printf("enter a string:\n");
gets(str);
printf("enter the value to do left and right shift:\n");
scanf("%d",&n);

count=strlen(str);
printf("count= %d \n",count);

for(i=0;i<n;i++)
{
temp=str[i];
str[i]=str[count-n];
str[count-n]=temp;
count++;
}
printf("%s \n",str);
}

/*OUTPUT IS: enter a string:
srimanth
enter the value to do left and right shift:
2
count= 8
thimansr

enter a string:
srimanth
enter the value to do left and right shift:
4
count= 8
anthsrim
*/
