#include <stdio.h>
void main(){
    float x;
    scanf("%f",&x);
    if(x<=0){
        printf("Error: Invalid Altitude");
    }else if (x > 0 && x < 400){
        printf("In progress: %.1f km remaining",400-x);
    }else if(x == 400){
        printf("KnackSat-2 has reached orbit!");
    }else{
        printf("Out of orbit: %.1f km over",x-400);
    }

}
