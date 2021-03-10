/* 3.Write a program using loops to generate following pattern.

        1
       121
      12321
     1234321
    123454321
   12345654321
  1234567654321
 123456787654321
12345678987654320               */
#include <stdio.h>
void main()
{
    int i, j, n = 9;
    
    for (i = 0; i <= n; i++)
    {
        /* print blank spaces */
        for (j = 1; j <= n - i; j++)
            printf(" ");
        /* Display number in ascending order upto middle*/
        for (j = 1; j <= i; j++)
            printf("%d", j);

        /* Display  number in reverse order after middle */
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }
}
