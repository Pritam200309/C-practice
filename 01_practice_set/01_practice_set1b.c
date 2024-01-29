#include<stdio.h>

int main(){
    int length, bredth;
    printf("What is the length of the rectangle\n");
    scanf("%d", &length);

    printf("What is the bredth of the rectangle\n");
    scanf("%d", &bredth);

    printf("The area of your rectangle is %d", length*bredth);

    return 0;
}