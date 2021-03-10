/* Program the following.

o	Prompt the values from user for a single dimensional integer array of length 5 and accept them in First In First Out form.
o	Consider a one dimensional character array of length 5 and holding data a, e, i, o and u. Sort them in ascending order.
o	Randomly place values in a 2 dimensional integer array.
o	Prompt values from user for a one dimensional integer array of length 10 in FILO order.
    Arrange this array in ascending and descending order in other 2 arrays.  */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(void)
{
    // Declares arrays
    int user_input_array[5];                         // singal dimensional array which accepts first in first out form.
    char vowels_array[5] = { 'u','i','o','a','e' };  // one dimensional ascending order character vowels array.
    int random_array[3][3];                          // two dimensional random place integer array.
    int values_array[10];                            // one dimensional int array of length 10 in first in,last out order.
    int ascending_array[10] = { 0 };                   // ascending order array.
    int descending_array[10] = { 0 };                  // descending order array.

    /* User input 5 values array */
    printf("Enter five values for an array : ");

    // for loop to scan array values
    for (int i = 4; i >= 0; i--)
    {
        scanf_s("%d", &user_input_array[i]);
    }

    printf("\nSingal dimensional array : ");

    // for loop to print scan array values
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", user_input_array[i]);
    }

    /* one dimensional character array of vowels */
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vowels_array[i] < vowels_array[j])
            {
                char temp = vowels_array[i];
                vowels_array[i] = vowels_array[j];
                vowels_array[j] = temp;
            }
        }
    }

    printf("\n\nOne dimensional ascending order character vowels array : ");

    // print one dimensional charachter array of vowels
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", vowels_array[i]);
    }

    /* two dimensional random array */
    srand(time(0));

    printf("\n\nRandom 2D array : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            random_array[i][j] = rand();

            printf("%d\t", random_array[i][j]);
        }
        printf("\n");
    }

    /* one dimensional int array of length 10 in first in,last out order */

    printf("\n\nEnter ten values for an array : ");

    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &values_array[i]);
    }

    printf("\n\none dimensional array : ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", values_array[i]);
    }

    // copy one dimensional int array of length 10 in first in,last out order 
    // in two other arrays to print in ascending & descending orders.
    for (int i = 0; i < 10; i++) {
        ascending_array[i] = values_array[i];
        descending_array[i] = values_array[i];
    }

    /* print one dimensional array in ascending order */
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (ascending_array[i] < ascending_array[j]) {
                int temp = ascending_array[i];
                ascending_array[i] = ascending_array[j];
                ascending_array[j] = temp;
            }
        }
    }

    printf("\n\none dimensional array in ascending order : ");

    for (int i = 0; i < 10; i++) {
        printf("%d ", ascending_array[i]);
    }

    /* print one dimensional array in descending order */
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (descending_array[i] > descending_array[j]) {
                int temp = descending_array[i];
                descending_array[i] = descending_array[j];
                descending_array[j] = temp;
            }
        }
    }

    printf("\n\none dimensional array in descending order : ");

    for (int i = 0; i < 10; i++) {
        printf("%d ", descending_array[i]);
    }

    printf("\n");

    return 0;
}
