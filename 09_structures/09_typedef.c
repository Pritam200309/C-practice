#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;

void show(struct employee emp){
    printf("The code of employee is: %d\n", emp.code);
    printf("The salary of employee is: %.2f\n", emp.salary);
    printf("The name of employee is: %s\n", emp.name);
}

int main(){
    emp e1;
    emp *ptr;

    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 150.56;
    strcpy(ptr->name, "Pritam");

    show(e1);

    return 0;
}