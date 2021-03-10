/* Suppose we have a file STD.doc containing roll numbers, name and marks of some students. 
Write a program to read the name of a student and check whether the record of this student 
I available in this file.  If the record is available then print it with an appropriate message,
otherwise print the message “Record does not exist”.     */
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* fp;
    fp = fopen("STD.doc", "r");
    char name[15], data[50];
    printf("Enter the name you want to search.: ");
    scanf("%s", name);
    int flag = 0;
    if (fp == NULL)
        printf("STD.doc failed to open.\n");
    else
    {
        printf("\n");
        while (fgets(data, 50, fp) != NULL)
        {
            char* temp = strtok(data, " ");
            while (temp != NULL)
            {
                if (strcmp(temp, name) == 0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    temp = strtok(NULL, " ");
                }
            }
            if (flag)
                break;
        }
        fclose(fp);
        if (flag)
            printf("%s exist in the record.\n", name);
        else
            printf("%s Record does not exist.\n", name);
        printf("\n");
    }
    return 0;
}
