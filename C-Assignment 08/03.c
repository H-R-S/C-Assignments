/* Complete the simple calculator program for multiplication and division. 
Also make it using if-else. */
#include<stdio.h>
void main()
{
	int num1, num2, cal; 
	char ope; 

	printf("Enter First Number : ");
	scanf_s("%i", &num1); 

	printf("Enter Second Number : ");
	scanf_s("%i", &num2); 

	printf("Choose Any Operator: +  | - | / | * \n");
	scanf_s(" %c", &ope); 

	if (ope == '+')
	{
		cal = num1 + num2;
		printf("Addition of two numbers is: %i", cal);
	}
	else if (ope == '-')
	{
		cal = num1 - num2;
		printf("Subtraction of two numbers is: %i", cal);
	}
	else if (ope == '/')
	{
		cal = num1 / num2;
		printf("Division of two numbers is: %i", cal);
	}
	else if (ope == '*')
	{
		cal = num1 * num2;
		printf("Multiplication of two numbers is: %i", cal);
	}
	else
	{
		printf("Invalid Input");
	}
}
