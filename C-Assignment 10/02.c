/* Program the following.
Write a C program to add two distances entered by user. Measurement of distance should be in 
inch and feet. (Note: 12 inches = 1 foot)   */
#include <stdio.h>
int main() {

    struct Distance {
        int feet;
        float inch;
    } d1, d2, result;

    // take first distance input
    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf_s("%d", &d1.feet);
    printf("Enter inch: ");
    scanf_s("%f", &d1.inch);

    // take second distance input
    printf("\nEnter 2nd distance\n");
    printf("Enter feet: ");
    scanf_s("%d", &d2.feet);
    printf("Enter inch: ");
    scanf_s("%f", &d2.inch);

    // adding distances
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    // convert inches to feet if greater than 12
    while (result.inch >= 12.0) {
        result.inch = result.inch - 12.0;
        ++result.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
    return 0;
}
