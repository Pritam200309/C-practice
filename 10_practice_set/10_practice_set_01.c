#include<stdio.h>

int main(){
    int a, b, c;
    FILE *ptr;
    ptr = fopen("text_01.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf( "The value of three integer is %d %d %d\n", a, b, c);
    fclose(ptr);
    return 0;
}