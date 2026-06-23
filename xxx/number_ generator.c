#include <stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    if(x < 0){
        printf("unable to work");
    }else{
        int y,z;
        y = x%10;
        if(y>5){
            y+=99;
        }else{
            y+=66;
        }
        int num1 = y%10;
        int num2 = (y/10)%10;
        z = num1 + num2;
        if(z%2==0){
            z+=212;
        }else{
            z+=357;
        }
        printf("%d",z);
    }
}
