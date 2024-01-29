#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i++ is %d\n", ++i);
    i++; // --> First printf then increment
    ++i; // --> First increment then print
    printf("The value of i is %d\n", i);

    i+=10;
    printf("The value of i is %d\n", i);
    return 0;
}