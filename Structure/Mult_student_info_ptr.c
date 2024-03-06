// Multiple students record using structure pointer
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};

void main()
{
    struct student *ptr;
    struct student std[3];
    ptr=std;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter student name: %d\n", i+1);
        scanf("%s", (ptr+i)->name);
        
        printf("Enter student roll number: %d\n", i+1);
        scanf("%d", &(ptr+i)->roll);
        
        printf("Enter student marks: %d\n", i+1);
        scanf("%f", &(ptr+i)->marks);
        
        printf("\n");

    }
    
     printf("Student details are below\n\n");
     
    for(i=0;i<3;i++)
    {
        printf("\nStudent name is: %s", (ptr+i)->name);
        printf("\nStudent roll number is: %d",(ptr+i)->roll);
        printf("\nStudent marks: %f", (ptr+i)->marks);
    }
    
}

/*OUTPUT IS: 
Enter student name: 1
A
Enter student roll number: 1
3
Enter student marks: 1
45

Enter student name: 2
B
Enter student roll number: 2
7
Enter student marks: 2
89

Enter student name: 3
C
Enter student roll number: 3
2
Enter student marks: 3
67

Student details are below


Student name is: A
Student roll number is: 3
Student marks: 45.000000

Student name is: B
Student roll number is: 7
Student marks: 89.000000

Student name is: C
Student roll number is: 2
Student marks: 67.000000

*/
