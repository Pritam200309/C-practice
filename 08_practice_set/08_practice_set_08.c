#include<stdio.h>
int occurance(char st[], char c){
    char *ptr = st;
    int count=0;
    while(*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "Apple";
    int count = occurance(st, 'p');
    printf("Occurance = %d", count);
    return 0;
}