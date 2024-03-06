// student details using structure pointer
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
