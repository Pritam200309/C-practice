#include<stdio.h>

int main(){
    int y;
    printf("Enter the year : ");
    scanf("%d", &y);

    if(y%4==0 && y%100!=0){
        printf("Year is a leap year\n");
    }
    else{
        printf("Year is not a leap year\n");
    }
    return 0;
}