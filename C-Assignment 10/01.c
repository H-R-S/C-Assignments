/* Program the following.
Create a strucutre named “student”. Structure has four  members: name (string), gender (char), 
rollNumber (integer) and marks (float). Create structure variable std to store information and 
display it on the screen.  */
#include<stdio.h>
#include<string.h>
void main()
{
	struct student
	{
		char name[25];
		char gender[10];
		int rollNumber;
		float marks;
	}std;
	printf("Enter Student name : ");
	scanf("%s", &std.name);

	printf("\nEnter Student gender : ");
	scanf("%s", &std.gender);

	printf("\nEnter Student rollNumber : ");
	scanf("%d", &std.rollNumber);

	printf("\nEnter Student marks : ");
	scanf("%f", &std.marks);

	printf("\n\nStudent Name : %s", std.name);
	printf("\nStudent Gender : %s", std.gender);
	printf("\nStudent rollNumber : %d", std.rollNumber);
	printf("\nStudent Marks : %f", std.marks);
	return 0;
}
