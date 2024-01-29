#include<stdio.h>

int main(){
    float gross_salary, BS, HRA, DA;
    printf("Enter the basic salary:\n");
    scanf("%f", &BS);

    if(BS>10000 && BS<=20000){
        HRA = BS * 0.25;
        DA = BS * 0.90;
        gross_salary = BS + HRA + DA;
        printf("Your gross salary is:%.2f", gross_salary);
    }
    else if(BS>20000){
        HRA = BS * 0.30;
        DA = BS * 95;
        gross_salary = BS + HRA + DA;
        printf("Your gross salary is:%.2f", gross_salary);
    }
    else{
        printf("Invalid data\n");
    }
    return 0;
}