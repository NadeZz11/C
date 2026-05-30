#include <stdio.h>
void main(){
    int n,sum=0;
    scanf("%d",&n);
    while(1){
        if(n%10==0&&n==0){
            break;
        }
        sum+=n%10;
        n=n/10;

    }
    if(sum%10==9){
        printf("OHH! SERIOUS SATHU");
    }
    else{
        printf("Hope to find SATHU next time!");
    }


}
