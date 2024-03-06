// Multiple students details using structure in C
#include<stdio.h>

struct student
{
  char name[20];
  int roll;
  float marks;
};

void main ()
{
  struct student std[5];

  int i;
  for (i = 0; i < 5; i++)
	{
	  printf ("Enter student name: %d\n", i + 1);
	  scanf ("%s", std[i].name);
	  printf ("Enter student Roll number: %d\n", i + 1);
	  scanf ("%d", &std[i].roll);
	  printf ("Enter student marks: %d\n", i + 1);
	  scanf ("%f", &std[i].marks);
	}

  printf ("Student details are below\n");
  for (i = 0; i < 5; i++)
	{
	  printf ("\nStudent name is: %s", std[i].name);
	  printf ("\nStudent roll number is: %d", std[i].roll);
	  printf ("\nStudent marks : %f", std[i].marks);
	}
}

/*OUTPUT IS: 
Enter student name: 1
A
Enter student Roll number: 1
1
Enter student marks: 1
56

Enter student name: 2
B
Enter student Roll number: 2
4
Enter student marks: 2
56

Enter student name: 3
C
Enter student Roll number: 3
4
Enter student marks: 3
78

Enter student name: 4
D
Enter student Roll number: 4
8
Enter student marks: 4
68

Enter student name: 5
E
Enter student Roll number: 5
3
Enter student marks: 5
98

Student details are below

Student name is: A
Student roll number is: 1
Student marks : 56.000000

Student name is: B
Student roll number is: 4
Student marks : 56.000000

Student name is: C
Student roll number is: 2
Student marks : 78.000000

Student name is: D
Student roll number is: 8
Student marks : 68.000000

Student name is: E
Student roll number is: 3
Student marks : 98.000000

*/
