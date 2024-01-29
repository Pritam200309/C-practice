#include<stdio.h>

int main(){
    float tax = 0, income;
    printf("Enter your Income\n");
    scanf("%f", &income);
    
    if(income >= 250000 && income <= 500000){
        tax = 0.05 * (income - 250000);
    }
    if(income > 500000 && income <= 1000000){
        tax = (0.05 * 250000) + (0.20 * (income - 500000));
    }
    if(income > 1000000){
        tax = (0.05 * 250000) + (0.20 * 500000) + 0.30 * (income - 1000000);
    }
    printf("Your net income tax is paid to be 26th of this month is %f", tax);
    return 0;
}