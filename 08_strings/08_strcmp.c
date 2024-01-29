#include<stdio.h>
#include<string.h>

int main(){
    char *st1 = "Hel";
    char st2[45] = "Helo";
    int val = strcmp(st1, st2);
    printf("Now the st2 is %d", val);
    return 0;
}