/* Write a function to convert temperature from Fahrenheit to Celsius named “ConvertFtoC” 
that takes one double value for Fahrenheit as argument, and returns the equivalent temperature 
in Celsius (type double). Create a program that exercise this function by obtaining a Fahrenheit 
value from the user, calling the function, and displaying the value of Celsius it returns.  
    [Formula:  Celsius = (Fahrenheit – 32) * 5/9]    */
#include <stdio.h>

double ConvertFtoC(double F);

void main()
{
	double F;

	printf("\nEnter Temperature in F : ");
	scanf("%lf", &F);

	double cel = ConvertFtoC(F);

	printf("\nTemperature in Celsius is : %0.2lf\n", cel);

	return 0;
}
double ConvertFtoC(double F) {
	double c;
	c = (F - 32.0) * (5.0 / 9.0);
	return c;
}
