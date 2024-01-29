#include<stdio.h>

int main(){
    int num1, num2, num3, num4;
    printf("Enter your first number\n");
    scanf("%d", &num1);

    printf("Enter your second number\n");
    scanf("%d", &num2);

    printf("Enter your third number\n");
    scanf("%d", &num3);

    printf("Enter your fourth number\n");
    scanf("%d", &num4);

    if(num1>num2){
        if(num1>num3){
            if(num1>num4){
                printf("%d is maximum", num1);
            }
            else{
                printf("%d is maximum", num4);
            }
        }
        else {
            if(num3>num4){
                printf("%d is maximum", num3);
            }
            else{
                printf("%d is maximum", num4);
            }
        }
    }
    else{
        if(num2>num3){
            if(num2>num4){
                printf("%d is maximum", num2);
            }
            else{
                printf("%d is maximum", num4);
            }
        }
        else{
            if(num3>num4){
                printf("%d is maximum", num3);
            }
            else{
                printf("%d is maximum", num4);
            }
        }
    }
    return 0;
}