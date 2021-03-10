/* Generate the table for a number input by the user */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	int n, i;

	printf("Enter any Integer : ");
	scanf_s("%d", &n);

	for (i = 1; i <= 10; ++i)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}

	return 0;
}
