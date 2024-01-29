#include<stdio.h>
void swap(int *a, int *b);
void wrong_swap(int a, int b);
int main(){
    int x =3, y =4;
    printf("The value of x and before swap is %d and %d\n", x, y);
    //wrong_swap(x,y);// will not work done due to call by value
    swap(&x, &y);// will work done due to call by reference
    printf("The value of x and after swap is %d and %d\n", x, y);
    return 0;
}

void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}