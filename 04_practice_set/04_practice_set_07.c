#include<stdio.h>

int main(){
    int i, a, sum=0;
    for(i=0; i<=10; i++){
        a = 8 * i;
        sum = sum + a;
    }
    printf("%d", sum);
    return 0;
}