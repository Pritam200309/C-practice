#include <stdio.h>
// sum is a function which takes a and b and returns as integers as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int c;
    c = sum(2, 5);
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}