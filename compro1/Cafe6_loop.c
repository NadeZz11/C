#include <stdio.h>
void main(){
    int coffee,water,milk,coco,M;
    scanf("%d%d%d%d%d",&coffee,&water,&milk,&coco,&M);
    for(int i=0;i<M;i++){
        int menu;
        scanf("%d",&menu);
        if(menu==0){
            int menu_restock,c_restock;
            scanf("%d%d",&menu_restock,&c_restock);
            if(menu_restock==1){
                coffee+=c_restock;
                printf("Coffee : %d\n",coffee);
            }
            if(menu_restock==2){
                water+=c_restock;
                printf("Water : %d\n",water);
            }
            if(menu_restock==3){
                milk+=c_restock;
                printf("Milk : %d\n",milk);
            }
            if(menu_restock==4){
                coco+=c_restock;
                printf("Choco : %d\n",coco);
            }
        }
        else{
            int n;
            scanf("%d",&n);
            if(menu==1){
                if(coffee/60>=n&&water/120>=n){
                    printf("Order complete\n");
                    printf("Americano : %d\n",n);
                    coffee=coffee-60*n;
                    water= water -120*n;
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
            if(menu==2){
                if(coffee/60>=n&&milk/120>=n){
                    printf("Order complete\n");
                    printf("Cappuccino : %d\n",n);
                    coffee=coffee-60*n;
                    milk=milk-120*n;
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
            if(menu==3){
                if(coffee/30>=n&&milk/120>=n&&coco/30>=n){
                    printf("Order complete\n");
                    printf("Mocha : %d\n",n);
                    coffee-=30*n;
                    milk-=120*n;
                    coco-=30*n;
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
                        printf("No Chocolate : %d\n",n*30-coco);
                    }
                }
            }
        }
    }
}
