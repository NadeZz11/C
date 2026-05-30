#include <stdio.h>
void main(){
    int x, center;
    scanf("%d", &x);
    center=x/2;
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
                //printf("(%d, %d)", abs(i-center), abs(j-center));
            if(abs(i-center)+abs(j-center)<=x/2){
                printf("*");
            }
            else{
                printf(" ");
;            }
        }
        printf("\n");
    }
}
