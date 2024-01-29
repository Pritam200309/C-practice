#include<stdio.h>

void change(int n)
{
n=n*10;
}

int main()
{
    int a;
    printf("Enter the value of a :\n");
    scanf("%d",&a);
   
    printf("the current value of a is =%d\n",a);
    
    change(a);
    printf("now,the value of a is =%d",a);
    return 0;
}
