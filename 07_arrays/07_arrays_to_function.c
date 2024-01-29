#include<stdio.h>

// void printarray(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element is %d is %d\n", i+1, *(ptr+i));
//     }
// }
void printarray(int ptr[], int n){
    for(int i=0; i<n; i++){
        printf("The value of element is %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 5555; //this value will be changes in arr array of main as well
}

int main(){
    int arr[] = {123, 234, 345, 456, 567, 678, 789, 890};
    printarray(arr, 8);
    printf("%d", arr[2]); 
    return 0;
}