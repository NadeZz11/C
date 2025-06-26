#include <stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    if(x>0){
        printf("Positive");
    }
    else if(x==0){
        printf("Zero");
    }
    else if(x<0){
        printf("Negative");
    }
}
