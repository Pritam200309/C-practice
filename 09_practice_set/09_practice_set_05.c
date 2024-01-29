#include<stdio.h>

struct complex
{
    int n1[10];
};

int main(){
    struct complex c1;
    c1.n1[0] = 34;
    c1.n1[1] = 45;
    c1.n1[2] = 56;
    c1.n1[3] = 89;

    printf("%d", c1.n1[2]);
    return 0;
}