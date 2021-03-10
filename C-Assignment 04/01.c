/* A multinational company hired you to develop their employee management system. 
There are many employees working in different positions and departments. Make a structure 
for each department telling the number of employees in that department including the heads. 
Also each position has a reporting head defined in the chart given below also state the 
reporting head in the employee structure. 
Make a structure for all the employees holding their bio – data which includes: 
•	Name
•	Employee ID
•	CNIC
•	Phone Number
•	Age 
•	Department 
•	Position  
Add more necessary variables as required. 
Create functions to perform these operations: 
•	Add Employee
•	Modify Employee
•	Delete Employee
•	Print All Employee 
•	Display Details of all Employees 
•	Search Employee using Position 
•	Search Employee using Department 
•	Search Employee using Employee id             */
#include<stdio.h>
#include<string.h>
void addEmployee();
void display();
void displayemployee();
void modify();
void delete();
void searchById();
void searchByDept();
void searchBypos();
struct employee
{
    int empid;
    int cnic;
    char name[20];
    int phone;
    int age;
    char dept[20];
    char pos[10];

}emp[10];
int i = 0;
int main()
{
    int ch;
    do
    {
        printf("Enter your choice");
        printf("\n1:Add Employee\n2:Display All Empolyee\n3:Modify\n4:Delete\n5:SearchById\n6:SearchByDepartment");
        printf("\n7:searchByposition\n8:Display all details\n9:Exit\nEnter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            displayemployee();
            break;
        case 3:
            modify();
            break;
        case 4:
            delete();
            break;
        case 5:
            searchById();
            break;
        case 6:
            searchByDept();
            break;
        case 7:
            searchBypos();
            break;
        case 8:
            display();
            break;
        case 9:
            break;
        }

    } while (ch != 9);
    return 0;
}
void addEmployee()
{

    printf("Enter Employee id : ");
    scanf("%d", &emp[i].empid);
    printf("Enter Employee name : ");
    scanf("%s", emp[i].name);
    printf("Enter Employee CNIC :");
    scanf("%d", &emp[i].cnic);
    printf("Enter Employee phone No :");
    scanf("%d", &emp[i].phone);
    printf("Enter Employee age : ");
    scanf("%d", &emp[i].age);
    printf("Enter department name : ");
    scanf("%s", emp[i].dept);
    printf("Enter Employee position : ");
    scanf("%s", emp[i].pos);
    i++;
}
void display()
{
    for (int j = 0; j < i; j++)
    {
        printf("Id: %d\n", emp[j].empid);
        printf("Name: %s\n", emp[j].name);
        printf("Age: %d\n", emp[j].age);
        printf("Phone: %d\n", emp[j].phone);
        printf("cnic: %d\n", emp[j].cnic);
        printf("Department: %s\n", emp[j].dept);
        printf("Position: %s\n", emp[j].pos);
    }
}
void displayemployee()
{
    for (int j = 0; j < i; j++)
        printf("Name: %s\n", emp[j].name);
}
void modify()
{
    int id, cnic, phone, age;
    char name[20], dept[20], pos[20];
    printf("enter the  id of employee to modify");
    scanf("%d", &id);
    printf("Enter Employee name\n");
    scanf("%s", name);
    printf("Enter Employee cnic\n");
    scanf("%d", &cnic);
    printf("Enter Employee phone\n");
    scanf("%d", &phone);
    printf("Enter Employee age\n");
    scanf("%d", &age);
    printf("Enter department name\n");
    scanf("%s", dept);
    printf("Enter Employee position\n");
    scanf("%s", pos);
    for (int j = 0; j < i; j++)
    {
        if (emp[j].empid == id)
        {
            strcpy(emp[j].name, name); // using srtcpy
            emp[j].cnic = cnic;
            emp[j].phone = phone;
            emp[j].age = age;
            strcpy(emp[j].dept, dept); // using srtcpy
            strcpy(emp[j].pos, pos); // using srtcpy
            break;
        }
    }
}
void delete()
{
    int id, p;
    printf("enter the  id of employee to delete");
    scanf("%d", &id);
    for (int j = 0; j < i; j++)
    {
        if (emp[j].empid == id)
        {
            p = j;
            break;
        }
    }
    for (int j = p; j < i - 1; j++) {
        emp[j] = emp[j + 1];
    }
    i = i - 1;
}
void searchById()
{
    int id, p;
    printf("enter the  id of employee");
    scanf("%d", &id);
    for (int j = 0; j < i; j++)
    {
        if (emp[j].empid == id)
        {
            printf("Id: %d\n", emp[j].empid);
            printf("Name: %s\n", emp[j].name);
            printf("Age: %d\n", emp[j].age);
            printf("Phone: %d\n", emp[j].phone);
            printf("cnic: %d\n", emp[j].cnic);
            printf("Department: %s\n", emp[j].dept);
            printf("Position: %s\n", emp[j].pos);
        }
    }
}
void searchByDept()
{
    char dept[20], p;
    printf("enter the Department");
    scanf("%s", dept);
    for (int j = 0; j < i; j++)
    {
        if (strcmp(emp[j].dept, dept) == 0)
        {
            printf("Id: %d\n", emp[j].empid);
            printf("Name: %s\n", emp[j].name);
            printf("Age: %d\n", emp[j].age);
            printf("Phone: %d\n", emp[j].phone);
            printf("cnic: %d\n", emp[j].cnic);
            printf("Department: %s\n", emp[j].dept);
            printf("Position: %s\n", emp[j].pos);
        }
    }
}
void searchBypos()
{
    char pos[20], p;
    printf("enter the Position");
    scanf("%s", pos);
    for (int j = 0; j < i; j++)
    {
        if (strcmp(emp[j].pos, pos) == 0)
        {
            printf("Id: %d\n", emp[j].empid);
            printf("Name: %s\n", emp[j].name);
            printf("Age: %d\n", emp[j].age);
            printf("Phone: %d\n", emp[j].phone);
            printf("cnic: %d\n", emp[j].cnic);
            printf("Department: %s\n", emp[j].dept);
            printf("Position: %s\n", emp[j].pos);
        }
    }
}
