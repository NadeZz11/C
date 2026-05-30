#include <stdio.h>
void main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sa,sb,sc,sd;
    scanf("%d%d%d%d",&sa,&sb,&sc,&sd);
    if(sa>=a){
        printf("1 ");
    }
    if(sb>=b){
        printf("2 ");
    }
     if(sc>=c){
        printf("3 ");
    }
     if(sd>=d){
        printf("4 ");
    }
}
