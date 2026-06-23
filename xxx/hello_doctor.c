#include <stdio.h>
void main(){
    int c1,c2,c3;
    scanf("%d%d%d",&c1,&c2,&c3);
    if(c1||c2||c3){
        printf("Doctor Emergency!!!!!");
    }else{
        printf("Non-emergency.");
    }

}
