#include <stdio.h>
void main(){
    int x,f,c_1=1;
    scanf("%d",&x);
    if(x<=1){
        c_1=0;
    }

    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            c_1=0;
            break;

        }
    }

    if(c_1){
       printf("%d is prime",x);
    }
    else {
        printf("%d is not prime",x);

    }
}
