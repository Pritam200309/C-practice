#include<stdio.h>

int main(){
    int a=10, b=-5, c=1, d;
    d = ++a && ++b || ++c;
    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
    return 0;
}