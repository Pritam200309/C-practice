#include<stdio.h>

int main(){
    //char str[]={'P','r','i','t','a','m','\0'};
    char str[]="Pritam";
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}