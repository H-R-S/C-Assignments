/* A formatted file master.txt contains the employee code, name and basic pay of employees of an 
organization. Write a program to calculate the D.A(dearness allowance), 
H.R.A (House rent allowance) and gross income of each employee and store employee code, name, 
basic pay, D.A, H.R.A and gross income to the file emp.txt, where D.A is the 32% of basic pay, 
H.R.A is 15% of basic pay and gross pay is the sum of basic pay, D.A and H.R.A.   */
#include <stdio.h>
int main() {
	//variable of type file for input and output files
	FILE* fin, * fout;

	//open input file in read mode
	fin = fopen("master.txt", "r");
	//open output file in write mode
	fout = fopen("emp.txt", "w");

	char code[20], name[20];
	float da, hra, gross, basic;

	while (!feof(fin)) {
		//read a line from input file
		fscanf(fin, "%s%s%f", code, name, &basic);
		fprintf(fout, "Code   Name   Basic    DA       HRA      Gross\n");
		da = basic * 0.32; //calculate DA
		hra = basic * 0.15; //calculate HRA
		gross = basic + da + hra; //calculate gross pay
		//write output record into file
		fprintf(fout, "%-6s %-6s %-6.2f %-6.2f %-6.2f %-6.2f\n", code, name, basic, da, hra, gross);
	}

	fclose(fin); //close input file
	fclose(fout); //close output file

	//print a message at the end
	printf("The entire processing has been completed. Thankyou\n\n");

	return 0;
}
