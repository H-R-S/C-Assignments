/* Input any number from user and generate its square e.g. square of 8 is 64 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	int a, b;

	printf("Please Enter any Integer number : ");
	scanf_s("%d", &a);

	b = pow(a, 2);

	printf("The Square of Integer %d is %d", a, b);

	return 0;
}
