#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "Pritam");

    facebook[1].code = 101;
    facebook[1].salary = 109.45;
    strcpy(facebook[1].name, "Harry");

    facebook[2].code = 102;
    facebook[2].salary = 111.50;
    strcpy(facebook[2].name, "Rohan");
    
    return 0;
}