#include <stdio.h>
void main(){
    int x,c=0;
    scanf("%d",&x);
    while(1){
        if(x%10==9){
            printf("SATHU ");
            c++;
        }
        if(x/10==0){
            break;
        }
        x=x/10;

    }
    if(c==9){
        printf("\nOHH! Serious SATHU");
    }
    else if(c==0){
        printf("Hope to find SATHU next time");
    }
}
