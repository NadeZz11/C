#include <stdio.h>
void main(){
    int p1,p2;
    scanf("%d %d",&p1,&p2);
    if(p1==p2){
        printf("0");
    }else if(p1 == 2 && p2 ==5 || p1 == 5 && p2 == 0 || p1==2 && p2==2){
        printf("1");
    }else{
        printf("2");
    }
}
