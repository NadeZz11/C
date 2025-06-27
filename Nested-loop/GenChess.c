#include <stdio.h>
void main(){
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        if(i%2!=0){
            for(int j=1;j<=N;j++){
                if(j%2!=0){
                    printf("1 ");
                }
                else {
                    printf("0 ");
                }
            }
            printf("\n");
        }
        else{
            for(int j=1;j<=N;j++){
                if(j%2!=0){
                    printf("0 ");
                }
                else {
                    printf("1 ");
                }
            }
            printf("\n");
        }

    }
}
