#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        //print 1 + 1 stars
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}