#include <stdio.h>
void main(){
    int N,count=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){

        int L=0,S=0,C=0;
        scanf("%d",&L);
        if(L<0 || L>100){
            for(;;){
                scanf("%d",&L);
                if(L>0&&L<=100){
                    break;
                }
            }
        }
        scanf("%d",&S);
        if(S<0||S>100){
            for(;;){
                scanf("%d",&S);
                if(S>0&&S<=100){
                    break;
                }
            }
        }
        scanf("%d",&C);
        if(C<0||C>100){
            for(;;){
                scanf("%d",&C);
                if(C>0&&C<=100){
                    break;
                }
            }
        }

        if(L+S+C>=180 && L+S>=125 && C>=70){
            count++;
        }


    }
    printf("%d",count);


}
