//Static function concept example

#include <stdio.h>
void file1_myfun1(void);
/*int mainPrivateData;/*this data is private to the  main.c, this main.c 
expecting this data shouldn't be modified outside scope of this file. But in the file1.c we can modify that data*/
static int mainPrivateData;// static won't allow to access or modify this data from another files
int main()
{
    mainPrivateData = 100;
    
    printf("mainPrivateData = %d\n", mainPrivateData);
    
    file1_myfun1();
    
    printf("mainPrivateData = %d\n", mainPrivateData);

    return 0;
}

 void change_system_clock(int system_clock)
//static void change_system_clock(int system_clock)
{
    printf("System clock is changed to = %d\n", system_clock);
}

file1.c file code:
/*extern int mainPrivateData;/*we can modify the data by declaring the extern variable, if it should not modify this data
then we should use static keyword for privacy or protecct the data from another developers/anyone*/
void change_system_clock(int system_clock);

void file1_myfun1(void)
{
   // mainPrivateData= 900;
   change_system_clock(0);
}


without static keyword output:
mainPrivateData = 100
System clock is changed to = 0
mainPrivateData = 100

  With static keyword Output:
/usr/bin/ld: /tmp/ccyGbomi.o: in function `file1_myfun1':
file1.c:(.text+0xe): undefined reference to `change_system_clock'
collect2: error: ld returned 1 exit status
