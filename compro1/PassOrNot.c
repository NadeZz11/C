#include <stdio.h>
void main(){
    int a,b,c,d,count;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sa,sb,sc,sd;
    scanf("%d%d%d%d",&sa,&sb,&sc,&sd);
    if(sa>=a){
        printf("1 ");
        count++;
    }
    if(sb>=b){
        printf("2 ");
        count++;
    }
     if(sc>=c){
        printf("3 ");
        count++;
    }
     if(sd>=d){
        printf("4 ");
        count++;
    }
    if(sa<a&&sb<b&&sc<c&&sd<d){
        printf("0 ");
    }
    if(count>=3){
        printf("\npass");
    }
    else{
        printf("\nfail");
    }

}
