#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hello";
    char st2[45] = "Pritam";
    strcat(st1, st2);
    printf("Now the st2 is %s", st1);
    return 0;
}