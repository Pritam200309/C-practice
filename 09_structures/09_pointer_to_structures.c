#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    // declaring e1 and ptr
    struct employee e1;
    struct employee *ptr;

    // pointing ptr to e1
    ptr = &e1;

    // set the values for e1
    //  (*ptr).code = 101; or you can also write // ptr->code = 101;
    ptr->code = 101;
    printf("%d", e1.code);
    return 0;
}