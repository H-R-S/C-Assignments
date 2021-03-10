/* Program the following.
·Rewrite the program you made in assignment 2 of last experiment using following functions. 
	double circleArea(double radius)
	double rectangleArea(double width, double length)
	double triangleArea(double base, double height)
	displayArea(double area)   */
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
        area = 2 *( 3.14 * r * r);
        break;
    case 2:
        printf("Input length and width of the rectangle : ");
        scanf_s("%d%d", &l, &w);
        area = 2 * (l * w);
        break;
    case 3:
        printf("Input the base and hight of the triangle :");
        scanf_s("%d%d", &b, &h);
        area = 2 * (.5 * b * h);
        break;
    }
    printf("The double area is : %f\n", area);
}
