#include<stdio.h>
int main(){
    int d;
    printf("Enter marks obtained in percentage  : ");
    scanf("%d ",&d);
    if((d>100) || (d<0) ) {
      printf("Invalid input");
    }
    else if(d>90)
    {
      printf("student got 100%% scholarship");
    }
    else if((d>70) && (d<=90))
    {
      printf("student got 50%% scholarship ");
    }
    else if((d>50) && (d<=70))
    {
      printf("student got 25%% scholarship");
    }
    else
    {
      printf("student got no scholarship");
    }
   return 0;
}