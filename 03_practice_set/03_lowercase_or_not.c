#include<stdio.h>

int main(){
   // 97-122 = a-z
   char ch;
   printf("Enter the character");
   scanf("%c", &ch);
   if(ch<=122 && ch>= 97){
   printf("It is lowercae");
   }
   else{
    printf("It is not lowercase");
   }
    return 0;
}