#include <stdio.h>
void main(){
    int pro1=0,pro2=0,pro3=0,pro4=0,cheak=0;
    for(int i=0;i<7;i++){
        int x;
        scanf("%d",&x);
        if(x == 1){
            pro1++;
        }else if(x == 2){
            pro2++;
        }else if(x == 3){
            pro3++;
        }else{
            pro4++;
        }
    }
    if(pro4==0){
        printf("BRO, YOU NEED SOME REST.\n");
        cheak = 1;
    }
    if(pro1>=3){
        printf("YOU GONNA FLY WITH THAT WING?\n");
        cheak = 1;
    }
    if(pro2>=3){
        printf("BRO THINKS EVERY DAY IS CHEST DAY.\n");
        cheak = 1;
    }
    if(pro3>=3){
        printf("BRO YOUR LEGS ARE CRYING.\n");
        cheak = 1;
    }
    if(cheak == 0){
        printf("PERFECT PLAN.\nLET'S GET THOSE GAINS!");
    }
}
