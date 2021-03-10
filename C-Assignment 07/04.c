/* 4.Write a program using loops to generate following output.

12 x 2 = 24
11 x 2 = 22 
10 x 2 = 20 
9 x 2 = 18 
8 x 2 = 16 
7 x 2 = 14 
6 x 2 = 12 
5 x 2 = 10 
4 x 2 = 8 
3 x 2 = 6 
2 x 2 = 4 
1 x 2 = 2            */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	for (int a = 12; a >= 1; --a) {
		printf("%d x 2 = %d\n", a, a * 2);
	}
	return 0;
}
