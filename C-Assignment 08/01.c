/* Make the number guessing program with switch case. */
#include<stdio.h>
void main()
{
	int num, guess, tries = 0;
	srand(time(0)); /* seed random number generator */
	num = rand() % 100 + 1; /* random number between 1 and 100 */

	printf("Guess My Number Game\n\n");

	do
	{
		printf("Enter a guess between 1 and 100 : ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > num)
		{
			printf("Too high!, Try again\n\n");
		}
		else if (guess < num)
		{
			printf("Too low!, Try again\n\n");
		}
		else
		{
			printf("\nCorrect! You got it in %d guesses!\n", tries);
		}

	} while (guess != num);

	switch (guess == num)
	{
		case 1: printf("\nHurray! Your guess number is correct");
		case 2: printf("\nYippy you got it!");
		case 3: printf("\nCongratualtions!! ");
		case 4: printf("\nGood Work!");
    }
	return 0;
}
