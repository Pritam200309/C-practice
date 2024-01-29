#include<stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int second;
} time;

void display(time t){
    printf("The first time is %d:%d:%d\n", t.hour, t.minute, t.second);
}

int main(){
    time t1 = {3 , 36, 35};
    time t2 = {4, 56, 24};

    display(t1);
    display(t2);
    return 0;
}