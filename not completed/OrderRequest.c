#include <stdio.h>
void main(){
    int order,snacks,drinks,candies,tissues;
    scanf("%d%d%d%d%d" ,&order,&snacks,&drinks,&candies,&tissues);
    if(order*2==snacks&&order*1==drinks&&order*5==candies&&order*4==tissues){
        printf("You can confirm this order.");
    }
    else{
        if (order*2<=snacks){
            printf("Do not need more snacks.\n");
        }
        else{
            int x = order*2-snacks;
            printf("Need %d more snacks.\n",x);
        }

        if (order*1<=drinks){
            printf("Do not need more drinks.\n");
        }
        else{
            int x = order*1-drinks;
            printf("Need %d more drinks.\n",x);
        }

        if (order*5<=candies){
            printf("Do not need more candies.\n");
        }
        else{
            int x = order*5-candies;
            printf("Need %d more candies.\n",x);
        }



        if (order*4<=tissues){
            printf("Do not need more tissues.\n");
        }
        else{
            int x = order*4-tissues;
            printf("Need %d more tissues.\n",x);
        }
    }




}
