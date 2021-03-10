/* Create a structure called Students that holds information like Registration code, 
name of student and date of admission. Write a program to create an array of structures 
and enter some data into it (15 records at least). Then ask the user to enter current date. 
Display the names of those Students who are in the school greater than or equal to 5 years. */
#include<stdio.h>
typedef struct student {
    char code[10];
    char name[20];
    int month, day, year;
} student;
int main() {
    student stds[] = {
        [0] .code = "CSE-C",[0].name = "Haris",[0].month = 02,[0].day = 16,[0].year = 2012,
        [1].code = "PHY-4",[1].name = "Ali",[1].month = 11,[1].day = 11,[1].year = 2013,
        [2].code = "ENG-8",[2].name = "Sarim",[2].month = 11,[2].day = 11,[2].year = 2014,
        [3].code = "MATH-7",[3].name = "Danial",[3].month = 11,[3].day = 11,[3].year = 2018,
        [4].code = "CHEM-9",[4].name = "Uzair",[4].month = 11,[4].day = 11,[4].year = 2015,
        [5].code = "CSE-9",[5].name = "Ahmed",[5].month = 11,[5].day = 11,[5].year = 2019,
        [6].code = "CSE-9",[6].name = "Saim",[6].month = 11,[6].day = 11,[6].year = 2004,
        [7].code = "CHEM-9",[7].name = "Zarar",[7].month = 11,[7].day = 11,[7].year = 2011,
        [8].code = "PHY-9",[8].name = "Hammmad",[8].month = 11,[8].day = 11,[8].year = 2010,
        [9].code = "CHEM-9",[9].name = "Humza",[9].month = 11,[9].day = 11,[9].year = 2014,
        [10].code = "ENG-9",[10].name = "Abdullah",[10].month = 1,[10].day = 25,[10].year = 2017,
        [11].code = "PHY-9",[11].name = "Abdulrehman",[11].month = 11,[11].day = 11,[11].year = 2010,
        [12].code = "CSE-9",[12].name = "Malik",[12].month = 1,[12].day = 26,[12].year = 2019,
        [13].code = "CHEM-9",[13].name = "Usman",[13].month = 11,[13].day = 11,[13].year = 2012,
        [14].code = "CSE-9",[14].name = "Hashir",[14].month = 11,[14].day = 11,[14].year = 2013,
        [15].code = "MATH-9",[15].name = "Mustafa",[15].month = 1,[15].day = 24,[15].year = 2009
    };

    int day, month, year, i;
    printf("Enter month day and year: "); scanf("%d %d %d", &month, &day, &year);

    printf("Students 5 year or more years older:\n");
    for (i = 0; i < 16; i++) {
        if (stds[i].year < (year - 5))printf("%s\n", stds[i].name);
        else if (stds[i].year == (year - 5) && stds[i].month < month)printf("%s\n", stds[i].name);
        else if (stds[i].year == (year - 5) && stds[i].month == month && stds[i].day < day)printf("%s\n", stds[i].name);
    }

}
