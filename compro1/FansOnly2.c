#include <stdio.h>
void main(){
    int c_up=0,c_banned=0,ban_tid=0,tid=0,x;
    while(1){
        int upload;
        scanf("%d",&upload);
        if(upload==-1){
            break;
        }
        c_up+=1;
        if(upload==4){
            ban_tid+=1;
            c_banned+=1;
            if(ban_tid==3){
                tid+=1;
            }
        }
        else{
            ban_tid=0;
        }
    }
    x=(c_banned*100.0)/c_up;
    if(x>=60&&tid>=1){
        printf("The user was banned");
    }
    else if(x>=60||tid>=1){
        printf("The user was warned");
    }
    else{
        printf("Pass");
    }

}
