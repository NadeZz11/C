#include <stdio.h>
#include <math.h>
void main(){
    double AC,BC,AB;
    scanf("%lf %lf",&AC,&BC);
    AB = (BC*BC) - (AC*AC);
    AB = sqrt(AB);
    if(AC < AB){
        printf("C\n%.2f",AC);
    }else{
        printf("B\n%.2f",AB);
    }
}
