#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter number 1:");
    scanf("%d", &num1);

    printf("Enter number 2:");
    scanf("%d", &num2);

    char op;
    printf("Input a operator:");
    scanf(" %c", &op);

    switch(op){
        case '+':
        printf("%d", num1+num2);
        break;
        case '-':
        printf("%d", num1-num2);
        break;
        case '*':
        printf("%d", num1*num2);
        break;
        case '/':
        printf("%d", num1/num2);
        break;
        case '%':
        printf("%d", num1%num2);
        break;
        default:
        printf("Invalid output");
    }

    return 0;
}