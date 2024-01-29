#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("Sum of a from b is %d\n", a+b);
    printf("Decrement of b from a is %d\n", a-b);
    printf("Multiplication of a and b is %d\n", a*b);
    printf("The value of a divided by bis %d\n", a/b);
    return 0;
}