#include <stdio.h>

void main(){
    int R,C,N;

    scanf("%d%d",&R,&C);
    for(int i=1;i<=R;i++){
        int countOdd=0;
        for(int j=1;j<=C;j++){

            int x;
            scanf("%d",&x);
            if(x%2!=0){
                countOdd++;
            }
        }
            printf("Row %d has %d odd numbers\n",i,countOdd);
    }

}
