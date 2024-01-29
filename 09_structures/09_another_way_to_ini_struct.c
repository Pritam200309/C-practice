#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee pritam = {100, 100.45, "Pritam"};

    printf("Code is : %d\n", pritam.code);
    printf("Salary is : %f\n", pritam.salary);
    printf("Name is : %s\n", pritam.name);

    return 0;
}