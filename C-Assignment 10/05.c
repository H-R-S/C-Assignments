/* 2.	Read from a text file using fscanf(). Read the integer present in the program.txt 
file and prints it onto the screen. */
#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    int i;
    FILE* fptr;
    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", c);
    printf("Data from the file:\n%s", c);

    fclose(fptr);

    return 0;
}
