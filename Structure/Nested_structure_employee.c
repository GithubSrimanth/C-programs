// employee Nested structure program 
#include<stdio.h>
struct personal
{
   char name[20];
   int emp_id;
};

struct salary
{
    float salary;
};

struct employee
{
    struct personal p;
    struct salary sal;
}e;

int main()
{
    struct employee e={{"Srimanth", 366}, {60457}};

   or //struct employee e={"Srimanth", 366, 60508};
    or/*struct employee e={
        .p.name= "Srimanth G",
        .p.emp_id= 366,
        .sal.salary=100000
    };*/

    printf("Employee deails are below\n");
    printf("Employee name is: %s\n", e.p.name);
    printf("Employee Id is: %d\n", e.p.emp_id);
    printf("Employee salary is: %f\n", e.sal.salary);
    return 0;
}

output:
Employee deails are below
Employee name is: Srimanth
Employee Id is: 366
Employee salary is: 60457.000000
