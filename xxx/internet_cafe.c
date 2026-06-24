#include <stdio.h>
void main(){
    int hr,A,B;
    scanf("%d",&hr);
    A = hr*20;
    B = 100 + (hr*20*0.9);
    printf("%d %d\n",A,B);
    if(A <= B){
        printf("A");
    }else{
        printf("B");
    }

}
