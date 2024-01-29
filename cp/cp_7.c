#include<stdio.h>
int main(){
    int n;
    printf("Feed n\n");
    scanf("%d", &n);

    if(n==0){
        printf("Sunday");
    }
    else if(n==1){
        printf("Monday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}