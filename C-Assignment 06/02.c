/* Prompt user to input distance in Kilometers and display it in meters. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	float meter, km;

	// input length in kilometer
	printf("Please Enter length in kilometer : ");
	scanf_s("%f", &km);

	// convert kilometer into meter
	meter = km * 1000;

	printf("Length in meter is %.2f", meter);

	return 0;
}
