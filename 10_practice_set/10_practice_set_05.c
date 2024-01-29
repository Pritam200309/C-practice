#include<stdio.h>

int main(){
    int a, b;
    FILE *ptr;
    ptr = fopen("text_06.txt", "r");
    fscanf(ptr, "%d", &a);
    b = a*2;
    ptr = fopen("text_07.txt", "w");
    fprintf(ptr, "%d", b);
    return 0;
}