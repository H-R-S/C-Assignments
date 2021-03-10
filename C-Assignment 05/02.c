/* Program the following. Design a mark sheet for a student with 5 subjects including Math, 
Physics, Electronics, Islamiat and Computer Programming. Take marks as input from user. 
Make separate functions for following;

o	Calculate grade for each subject.
o	Calculate CGPA for each subject.
o	Calculate percentage. For each subject    */
#include<stdio.h>
#include<math.h>

/* Function to calculate Grade from user input given marks of 5 subjects */
void Grade(float sub1, float sub2, float sub3, float sub4, float sub5)
{
    float result = ((sub1 + sub2 + sub3 + sub4 + sub4) / 500) * 100;

	// Grading according to IQRA University Grading Policy
	if (result >= 88.00)
		{
			printf("Grade A \n");
		}
	else if (result >= 74.00)
		{
			printf("Grade B \n");
		}
	else if (result >= 67.00)
		{
			printf("Grade C+ \n");
		}
	else if (result >= 60.00)
		{
			printf("Grade C \n");
		}
	else
	    {
		    printf("Grade F \n");
	    }
}

/* Function to Calculate CGPA from user input given marks of 5 subjects */
void CGPA(float sub1, float sub2, float sub3, float sub4, float sub5)
{
	float result = ((sub1 + sub2 + sub3 + sub4 + sub5) / 500) * 100;

	// Grading according to IQRA University Grading Policy
	if (result >= 88.00)
	{
		printf("CGPA = 4.0");
	}
	else if (result >= 74.00)
	{
		printf("CGPA = 3.5");
	}
	else if (result >= 67.00)
	{
		printf("CGPA = 3.0");
	}
	else if (result >= 60.00)
	{
		printf("CGPA = 2.5");
	}
	else
	{
		printf("CGPA = 0.0");
	}
}

/* Function to Calculate Pecentage from user input given marks of 5 subjects */
void Percentage(float sub1, float sub2, float sub3, float sub4, float sub5)
{
	float result = ((sub1 + sub2 + sub3 + sub4 + sub5) / 500 ) * 100;
	printf("Percentage = %.2f \n", result);
}

/* Main Function to get user input and print Grade, CGPA & Percentage */
void main(void)
{
	// Declare variables
	float Maths, Physics, Electronics, Islamiat, Computer;
	
	// User input Maths marks
	printf("Enter the given number of Maths : ");
	scanf_s("%f", &Maths);

	// User input Physics marks
	printf("Enter the given number of Physics : ");
	scanf_s("%f", &Physics);

	// User input Electronics marks
	printf("Enter the given number of Electronics : ");
	scanf_s("%f", &Electronics);

	// User input Islamiat marks
	printf("Enter the given number of Islamiat : ");
	scanf_s("%f", &Islamiat);

	// User input Computer marks
	printf("Enter the given number of Computer : ");
	scanf_s("%f", &Computer);

	Percentage(Maths, Physics, Electronics, Islamiat, Computer);

    Grade(Maths, Physics, Electronics, Islamiat, Computer);

	CGPA(Maths, Physics, Electronics, Islamiat, Computer);

	return 0;
}
