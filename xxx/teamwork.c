#include <stdio.h>
void main(){
    int Tank,Mage,Healer,sum=0;
    scanf("%d%d%d",&Tank,&Mage,&Healer);
    if(Tank <= 0 || Mage <= 0 || Healer <= 0){
        printf("Your party can't play this event!");
    }else{
        while(1){
            int num,po;
            scanf("%d %d",&num,&po);
            if(num<=0||num>3||po<0){
                sum = Tank+Mage+Healer;
                printf("%d %d %d\n",Tank,Mage,Healer);
                printf("Let's fight with a dragon!\n");
                break;
            }else{
                if(num == 1){
                    Tank = Tank + (po*0.35);
                }else if(num == 2){
                    Mage = Mage + (po*0.35);
                }else{
                    Healer = Healer + (po*0.1);
                }
                printf("%d %d %d\n",Tank,Mage,Healer);
            }
        }
        int dragon;
        scanf("%d",&dragon);
        dragon*=5;
        if(sum >= dragon){
            printf("Victory!\n");
        }else{
            printf("Try again\n");
            printf("HP Dragon = %d\n",dragon - sum);
        }
    }

}
