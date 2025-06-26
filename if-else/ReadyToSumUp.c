#include <stdio.h>
void main(){
    int N,sum=0,x;
    scanf("%d",&N);
    int i=1;
    while(i<=N){
        scanf("%d",&x);
        sum=sum+x;
        i++;
    }
    if(sum>0){
        printf("%d\npositive",sum);
    }
    else if(sum<0){
        printf("%d\nnegative",sum);
    }
    else{
        printf("%d\nzero",sum);
    }
}
