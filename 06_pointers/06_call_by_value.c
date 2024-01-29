#include<stdio.h>
int sum(int a, int b);
int main(){
    int a=4, b=7;
    printf("The value of a and b is %dand %d\n", a, b);
    printf("The value of a + b is %d\n", sum(a,b));
    sum(a,b);
    printf("The value of after sum function a and b is %dand %d\n", a, b);
    return 0;
} 
int sum(int a, int b){
    return a + b;
    a = 1234;
    b = 2345;
}