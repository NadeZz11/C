#include <stdio.h>
void main(){
    int m,n,coffee,water,milk,coco;
    scanf("%d%d%d%d%d%d",&coffee,&water,&milk,&coco,&m,&n);
    if(m==1){
        if(coffee/60>=n&&water/120>=n){
            printf("Order complete\n");
            printf("Americano : %d",n);
        }
        else{
            printf("Order incomplete\n");
            if(coffee<60*n){
                printf("No Coffee : %d\n",n*60-coffee);
            }
            if(water<120*n){
                printf("No Water : %d\n",n*120-water);
            }
        }
    }
    if(m==2){
        if(coffee/60>=n&&milk/120>=n){
            printf("Order complete\n");
            printf("Cappuccino : %d",n);
        }
        else{
            printf("Order incomplete\n");
            if(coffee<60*n){
                printf("No Coffee : %d\n",n*60-coffee);
            }
            if(milk<120*n){
                printf("No Milk : %d\n",n*120-milk);
            }
        }
    }
    if(m==3){
        if(coffee/30>=n&&milk/120>=n&&coco/30>=n){
            printf("Order complete\n");
            printf("Mocha : %d",n);
        }
        else{
            printf("Order incomplete\n");
            if(coffee<30*n){
                printf("No Coffee : %d\n",n*30-coffee);
            }
            if(milk<120*n){
                printf("No Milk : %d\n",n*120-milk);
            }
            if(coco<30*n){
                printf("No Chocolate : %d",n*30-coco);
            }
        }
    }
}
