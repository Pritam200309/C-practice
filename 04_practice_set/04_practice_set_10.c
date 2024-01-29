#include<stdio.h>

int main(){
    // Prime Number = A prime number (or a prime)is a natural number greater than 1 is not a product of two samller numbers
    // Disclaimer: This is not thr best method to solve the problem
    int n, prime=1;
    printf("Enter your number :");
    scanf("%d", &n);
    for (int i=2;i<n;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==0){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number");
    }
    return 0;
}