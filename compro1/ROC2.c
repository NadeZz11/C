#include <stdio.h>
void main(){
    int e,x,y;
    scanf("%d%d%d",&e,&x,&y);
    if(y+e>=x){
        printf("Congratulation LVL Up!!");
    }
    else{
        int a = x-e;
        int b = a / y;
        if(a % y != 0){
            b++;
        }
        printf("No %d",b);
    }
}
