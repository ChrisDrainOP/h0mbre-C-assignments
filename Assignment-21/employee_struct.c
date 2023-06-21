#include <stdio.h>
#include <stdlib.h>

struct information {
    char last_name[10];
    char first_name[20];
    int employee_id_number[9];
    int social_last_four[5];
    char title[30];

};

struct employee {
    struct information employee_1;
} add_employees;

int main() 
{
    printf("Enter employee last name: \n");
    scanf("%9s", add_employees.employee_1.last_name);

    printf("Enter employee first name: \n");
    scanf("%19s", add_employees.employee_1.first_name);

    printf("Enter Employee ID Number: \n");
    scanf("%8s", add_employees.employee_1.employee_id_number);

    printf("Enter last 4 of social: \n");
    scanf("%4s", add_employees.employee_1.social_last_four);

    printf("Enter employee title: \n");
    scanf("%29s", add_employees.employee_1.title);

    printf("______________________\n");
    printf("\n\nEmployees last name is: %s \n", add_employees.employee_1.last_name);
    printf("Employees first name is: %s \n", add_employees.employee_1.first_name);
    printf("Employees EIN is: %s \n", add_employees.employee_1.employee_id_number);
    printf("Employees Social is: %s \n", add_employees.employee_1.social_last_four);
    printf("Employees Title is: %s \n", add_employees.employee_1.title);
}