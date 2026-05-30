#include <stdio.h>
void main(){
    int K,K1,K2,S1,S2,G;
    scanf("%d%d%d%d%d%d",&K,&K1,&K2,&S1,&S2,&G);
    if (G==1){
        if(K1<K&&S1>=9){
            printf("1");
        }
        else if(K2 < K&&S2>=9){
            printf("2");
        }
        else{
            printf("0");
        }

    }
    else if(G==2){
        if(K2<K&&S2>=9){
            printf("2");
        }
        else if(K1 < K&&S1>=9){
            printf("1");
        }
        else{
            printf("0");
        }
    }

}
