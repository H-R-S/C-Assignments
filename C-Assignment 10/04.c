/* 1.	Write to a text file using fprintf(). Take number input from user and stores in the 
file program.txt. */
#include <stdio.h>
#include <stdlib.h>

void main() 
{
    char sentence[1000];

    // creating file pointer to work with files
    FILE* fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}
