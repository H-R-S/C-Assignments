/* Suppose three numbers x, y, z are passed to a function. Implement this function to 
assign the values of y to x, z to y and x to z and return these three changed values 
to main. Use pointer.    */
#include<stdio.h>

void swap(int*, int*, int*);

int main()
{
    // Declare variables
    int x,y,z;

    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("Enter the value of y : ");
    scanf("%d", &y);

    printf("Enter the value of z : ");
    scanf("%d", &z);

    printf("\nBefore swapping : x = %d , y = %d , z = %d\n", x, y, z);
    swap(&x, &y, &z);
    printf("After swapping : x = %d , y = %d , z = %d\n", x, y, z);
    return 0;
}

void swap(int* x, int* y, int* z) {
    int swap;
    swap = *y;
    *y = *z;
    *z = *x;
    *x = swap;
}
