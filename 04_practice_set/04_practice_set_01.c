#include<stdio.h>

int main(){
    int n, i = 10;
    printf("Enter the number :");
    scanf("%d", &n);
    while(i>0){
        printf("\t%d * %d = %d\n", n, i, n*i);
        i--;
    }
    return 0;
}