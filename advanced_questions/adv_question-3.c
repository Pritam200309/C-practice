// #include<stdio.h>

// int func(int n){
//     static int count = 0;
//     if (n>0){
//         count = count + 1;
//         return func(n/10);
//     }
//     else
//     {
//         return count;
//     }
// }
// int main(){
//     int n = 12345;
//     int c = func(n);
//     printf("%d", c);
//     return 0;
// }

#include<stdio.h>

int main(){
    int a = 29;
    int *p = &a;
    printf("%u\n", p);
    printf("%d\n", (*p)++);
    printf("%d\n", *p++);
    printf("%d", ++p);
    return 0;
}