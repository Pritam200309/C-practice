#include<stdio.h>
void display(); // Function prototype

int main(){
    int a;
    printf("Initializing display function\n");
    display(); // function call
    printf("Display function finished its work\n");
    return 0;
}

// function definition
void display(){
    printf("This is display\n");
}