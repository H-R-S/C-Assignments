/* Make an alphabet guessing program using if-else. */
#include <stdio.h>
#include <stdlib.h>
#define MAXGUESS 10

int main()
{
    char actual[] = "football";
    char guess[] = "--------";
    int i, j, wrongGuess = 0;
    char ch;

    printf("Word Guessing Game\n");

    for (i = 1; i <= MAXGUESS && strcmp(actual, guess) != 0; i++)
    {
        printf("\nTry #%d ...................", i);

        printf("\nPlease pick a letter: ");
        scanf_s(" %c", &ch);

        for (j = 0; j < 8; j++)
        {
            if (actual[j] == ch)
            {
                guess[j] = ch;
            }
        }
        printf("\n");

        for (j = 0; j < 8; j++)
        {
            printf("%c", guess[j]);
        }
        printf("\n");
    }
    if (i <= MAXGUESS && strcmp(actual, guess) == 0)
    {
        printf("\n\n******You got it!!!! in %d guesses \n\n", i - 1);
    }
    else
    {
        printf("\n\n******You failed to guess...\n\n Secret Word: %s \n\n", actual);
    }
    return 0;
}
