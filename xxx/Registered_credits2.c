#include <stdio.h>
void main(){
    int op,credit,sum;
    scanf("%d %d",&op,&credit);
    if(op == 1){
        if(credit <= 6){
            sum = 30000;
        }else if(credit <= 11){
            sum = 18000;
        }else if(credit <= 22){
            sum = 30000;
        }else{
            sum = 30000+ (credit-22)*1500;
        }
    }else{
        sum = credit*1500;
    }
    printf("%d",sum);
}
