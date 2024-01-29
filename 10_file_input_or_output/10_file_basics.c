#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt", "r");  //--> for reading a files
    // ptr = fopen("sample.txt", "w");  //-->for writing to a file
    return 0;
}