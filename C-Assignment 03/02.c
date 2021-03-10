/* Research our planet population growing issues online. Get approximations for the current 
population and its growing rate (the percentage by which it’s likely to increase this year). 
Write a program that calculates 
a) World population growth each year for the next 25 years, using the supposition that the 
current growth rate will remain unchanged.
b) Print the results in a table. The first column should display the year from year 1 to year 25. 

The second column should display the anticipated world population at the end of that year.
The third column should display the numerical increase in the world population that would
occur that year.    */
#include <stdio.h>
int main()
{
	double population = 7874965825; // population in 2021
	double gr = 1.03; // gr = growth rate as per 2021
	double pop[26];
	pop[0] = population;
	double inc[26];
	int i;
	for (i = 1; i < 26; i++) {
		pop[i] = pop[i - 1] * gr;
		inc[i] = pop[i] - pop[i - 1];
	}
	printf("----------------------------------\n");
	printf("Year     Population      Increase\n");
	printf("----------------------------------\n");
	for (i = 1; i < 26; i++) {
		printf("%-5d\t %-5.0lf\t %-5.0lf\t\n", i, pop[i], inc[i]);
	}
	printf("----------------------------------\n");
	return 0;
}
