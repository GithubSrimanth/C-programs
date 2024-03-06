// Employee details using structure 
#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    float sal;
};

void main()
{
    struct employee emp;
    
    printf("Enter employee name: \n");
    scanf("%s", emp.name);
    
    printf("Enter employee ID: \n");
    scanf("%d", &emp.id);
    
    printf("Enter employee salary: \n");
    scanf("%f", &emp.sal);
    
    printf("Employee details are below  \n");
    
    printf("Employee name is: %s", emp.name);
    printf("\nEmployee ID is: %d", emp.id);
    printf("\nEmployee salary is: %.2f", emp.sal);
}
/*OUTPUT IS: 
Enter employee name:
Srimanth
Enter employee ID: 
106
Enter employee salary: 
28678.238
Employee details are below  
Employee name is: Srimanth
Employee ID is: 106
Employee salary is: 28678.24
*/
