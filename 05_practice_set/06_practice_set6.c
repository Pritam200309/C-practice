#include<stdio.h>

int sum(int);

int main(){
    int num;
    printf("Enter the value of number:\n");
    scanf("%d", &num);

    printf("The sum of first nth number is %d", sum(num));
    return 0;
}

int sum(int num){
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else
    {
        return (num + sum(num-1));
    }
}