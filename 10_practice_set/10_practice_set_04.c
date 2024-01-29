#include<stdio.h>

int main(){
    char name1[20];
    char name2[20];
    int salary1;
    int salary2;

    printf("Enter the name first employee : \n");
    scanf("%s", &name1);
    printf("Enter the name second employee : \n");
    scanf("%s", &name2);

    printf("Enter the salary of first employee : \n");
    scanf("%d", &salary1);
    printf("Enter the salary of second employee : \n");
    scanf("%d", &salary2);

    FILE *ptr;
    ptr = fopen("text_05.txt", "w");
    fprintf(ptr, "%s : %d\n", name1, salary1);
    fprintf(ptr, "%s : %d\n", name2, salary2);
    return 0;
}
