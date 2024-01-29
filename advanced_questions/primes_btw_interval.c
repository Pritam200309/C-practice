#include<stdio.h>

int main(){
    int n1, n2;
    printf("Enter first number : \n");
    scanf("%d", &n1);
    printf("Enter second number : \n");
    scanf("%d", &n2);

    for(int i=n1; i<n2; i++){
        int f = 0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                f = 1;
            }
        }
        if(f==0){
            printf("%d\n", i);
        }
    }
    return 0;
}