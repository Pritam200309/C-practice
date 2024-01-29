#include<stdio.h>
void main()
{
    int num1 = 6, num2 = 2, sum, mul, div;
    int *ptr1, *ptr2;
    ptr1 = &num1, ptr2 = &num2;
    printf("the addresses of ptr1 is %u and ptr2 is %u", ptr1, ptr2);
    sum = *ptr1 + *ptr2;
    printf("\nthe value of sum is %d", sum);
    mul = sum * *ptr1;
    printf("\nthe value of product is %d", mul);
    *ptr2 += 1;
    printf("\nthe value after adding 1 is %d", *ptr2);
    div = 9 + (*ptr1) / (*ptr2) - 30;
    printf("\nthe value of divison is %d", div);
}