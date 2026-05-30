#include <stdio.h>
void main(){
    int n,k,orderDay=0,day=1,order;
    scanf("%d%d",&k,&n);
    k=k*100;
    for(int i=0;i<n;i++){
        scanf("%d",&order);
        orderDay+=(k-order);
        k=k-order;
        printf("%d orderDay\n", orderDay);
        //printf("%d\n",day);
        if(orderDay>k){
            orderDay=0;
            day++;
            printf("%d\n",day);
        }
        else if(orderDay<k){
            orderDay-=k;
            printf("%d\n",day);
            continue;
        }
        else{
            printf("%d",&day);
        }



    }


}
