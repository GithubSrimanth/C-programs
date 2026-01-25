// C Program to Reverse Order of Words in a String 

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, len;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	printf("\n After Reversed word by word then string is: \n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ')
		{
			str[i] = '\0';
			printf("%s ", &(str[i]) + 1);	// or printf("%s ", str + i + 1); or //&str[i+1]
		} 
	}
	printf("%s", str);
	
  	return 0;
}

/* OUTPUT IS:

Please Enter any String :  My name is Gaddam Srimanth

After Reversed word by word then string is: 
Srimanth Gaddam is name My

*/
