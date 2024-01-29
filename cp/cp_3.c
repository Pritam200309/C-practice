#include<stdio.h>

int main(){
    char x='a';
    int b=1018;
    int c=6.12345;
    float d=123456.123456;
    printf("Pritam %c Kharait",x);
    printf("\nPritam %d Kharait",x);
    printf("\nPritam \a Kharait");
    printf("\nPritam \v Kharait");
    printf("\nPritam \n Kharait");
    printf("\nPritam \t Kharait");
    printf("\nPritam \\n Kharait");
    printf("\nPritam \? Kharait");
    printf("\nPritam %d Kharait",b);
    printf("\nPritam %3d Kharait",b);
    printf("\nPritam %f Kharait",c);
    printf("\nPritam %.4f Kharait",c);
    printf("\nPritam %5f Kharait",d);
    printf("\nPritam %2.3f Kharait",d);
    return 0;
}