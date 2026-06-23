#include <stdio.h>
void main(){
    int p1,p2,p3,P_win;
    scanf("%d%d%d",&p1,&p2,&p3);
    if(p1 >= p2 && p1 >= p3){
        printf("Player 1 WIN\n");
        if(p2 >= p3){
            printf("%d %d %d",p1,p2,p3);
        }else{
            printf("%d %d %d",p1,p3,p2);
        }

    }else if(p2 > p1 && p2 >= p3){
        printf("Player 2 WIN\n");
        if(p1 >= p3){
            printf("%d %d %d",p2,p1,p3);
        }else{
            printf("%d %d %d",p2,p3,p1);
        }
    }else{
        printf("Player 3 WIN\n");
        if(p1 >= p2){
            printf("%d %d %d",p3,p1,p2);
        }else{
            printf("%d %d %d",p3,p2,p1);
        }
    }
}
