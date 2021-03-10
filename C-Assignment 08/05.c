/* Program the following.
·	Ask User to select one option from the following.
•	Calculate area of Circle [c]
•	Calculate area of Rectangle [r]
•	Calculate area of Triangle [t]

·	If user enters c then ask user to enter radius and calculate area using following formula.
·	If user enters r then ask user to enter length & width and calculate area using following 
    formula.
·	If user enters t then ask user to enter base & height and area using following formula.
·	Display the area.   */
#include <stdio.h>
void main()
{
    int choice, r, l, w, b, h;
    float area;
    printf("Input 1 for area of circle\n");
    printf("Input 2 for area of rectangle\n");
    printf("Input 3 for area of triangle\n");
    printf("Input your choice : ");
    scanf_s("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Input radius of the circle : ");
        scanf_s("%d", &r);
        area = 3.14 * r * r;
        break;
    case 2:
        printf("Input length and width of the rectangle : ");
        scanf_s("%d%d", &l, &w);
        area = l * w;
        break;
    case 3:
        printf("Input the base and hight of the triangle :");
        scanf_s("%d%d", &b, &h);
        area = .5 * b * h;
        break;
    }
    printf("The area is : %f\n", area);
}
