#include <stdio.h>
void main(){
    int N,x,sum=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        int numOut=0;
        scanf("%d",&x);
        if(x<0){
            printf("It's not positive number!!\n");
            continue;
        }
        numOut=x*i;
        sum+=numOut;
        printf("%d\n",numOut);
    }
    printf("Total = %d",sum);

}
