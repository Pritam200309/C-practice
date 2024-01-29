#include<stdio.h>

int main() {
int a , b , c;
    int d;
    printf("Enter marks obtained in the subject : ");
    scanf("%d %d %d ",&a,&b,&c);
    d = (a + b + c)/3;
    if((a>100) || (b>100) || (c>100) || (a<0) || (b<0) || (c<0)) {
      printf("Invalid input");
    }
    else if(d>90)
    {
      printf("student got grade A");
    }
    else if((d>70) && (d<=90)) 
    {
      printf("student got grade B ");
    }
    else if((d>50) && (d<=70)) 
    {
      printf("student got grade C");
    }
    else 
    {
      printf("student failed");
    }
   return 0;
 }