// student details using structure pointers
#include<stdio.h>
#include<stdlib.h>
    struct student
    {
        char name[50];
        int rollnum;
        float marks;
    };
    
    void main()
    {
        struct student *std;
       std= (struct student*) malloc(sizeof(struct student));
        printf("Enter student name: \n");
        scanf("%s", std->name);
        printf("Enter Roll number: \n");
        scanf("%d", &std->rollnum);
        printf("Enter student marks: \n");
        scanf("%f", &std->marks);
        
        printf("Student details are: \n");
        printf("\nStudent name is: %s", std->name);
        printf("\nStudent Roll number is: %d", std->rollnum);
        printf("\n Student marks are: %.2f", std->marks);
    }


/*OUTPUT IS: 
Enter student name: 
Srimanth
Enter Roll number: 
24
Enter student marks: 
67.7889
Student details are: 

Student name is: Srimanth
Student Roll number is: 24
 Student marks are: 67.79
*/
