#include<stdio.h>

int main(){
    char a = 'P';
    char b = 'X';
    char c = a&b;
    char d = a^b;
    printf("%d, %d", c, d);
    return 0;
}
