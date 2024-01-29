#include <stdio.h>
int main(){
    int n,t,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("----Which funtion you wanna perform----\n");
    printf("\tType 1 for Pre-Increment\n");
    printf("\tType 2 for Post-Increment\n");
    printf("\tType 3 for Pre-Decrement\n");
    printf("\tType 4 for Post-Decrement\n");
    printf("Enter your choice: ");
    scanf("%d",&t);
    if(t==1){
        printf("%d",s= ++n);
        printf("\nYour number is first incremented and then used for next operations");
    }
    else if(t==2){
        printf("%d",s= n++);
        printf("\nYour number is first used and then incremented");
    }
    else if(t==3){
        printf("%d",s= --n);
        printf("\nYour number is first decremented and then used for next operations");
    }
    else if(t==4){
        printf("%d",s= n--);
        printf("\nYour number is first used and then decremented");
    }
    else{
        printf("\nPlease enter a valid Operator");
    }
    printf("\n----This code is written by Pritam----");
    return 0;
}