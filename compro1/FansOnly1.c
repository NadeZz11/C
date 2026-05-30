#include <stdio.h>
void main(){
    int c_banned=0,c_up=0;
    while(1){
        int upload;
        scanf("%d",&upload);
        if(upload==-1){
            break;
        }
        c_up+=1;
        if(upload==4){
            printf("Alert!! Porn contents\n");
            c_banned+=1;
        }
    }
    if((c_banned*100.0)/c_up>=60){
        printf("The user was banned");
    }



}
