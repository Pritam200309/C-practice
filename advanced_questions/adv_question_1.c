#include <stdio.h>

int main()
{
    int x, y = 10;
    char z = 'A';
    x = y + z;
    printf("%d\n", x);

    int a=1, b=-3, c=2;
    float X = a * b / 2 - 3 / 2 + b + 2 * --c;
    int Y = a / b *  + 3 % 2 - b + 2 % c++;
    printf("%f\n", X);
    printf("%d\n", y);

    return 0;
}