#include <stdio.h>
void main(){
    int k,n,order,totalOrder=0,day=0;
    scanf("%d%d",&k,&n);
    k=k*100;
    for(int i=0;i<n;i++){
        scanf("%d",&order);
        totalOrder+=order;
        day=totalOrder/k;
        if(totalOrder%k!=0){
            day++;
        }
        printf("%d\n",day);
    }
}

