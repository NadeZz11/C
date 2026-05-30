#include<stdio.h>
void main(){
    int count=0;
    float beforDis=0,afterDis=0;
    float N;

    for(;;){
        scanf("%f",&N);

        if(N==0){
            break;
        }
        else if(N<0){
            printf("Input Error.\n");
        }

        else if(N>0){
            count++;
            beforDis+=N;
        }


    }
    printf("Total number of items: %d\n",count);
    printf("Total before discount: %.2f\n",beforDis);
    float amount;
    if(beforDis>=0&&beforDis<=300){
        afterDis=beforDis;
        printf("Total after discount: %.2f\n",afterDis);
        amount=beforDis-afterDis;
        printf("Discount amount: %.2f\n",amount);
    }
    else if (beforDis>=301&&beforDis<=1000){
        afterDis=beforDis*0.95;
        printf("Total after discount: %.2f\n",afterDis);
        amount=beforDis-afterDis;
        printf("Discount amount: %.2f\n",amount);
    }
    else if(beforDis>=1001&&beforDis<=2500){
        afterDis=beforDis*0.93;
        printf("Total after discount: %.2f\n",afterDis);
        amount=beforDis-afterDis;
        printf("Discount amount: %.2f\n",amount);
    }
    else if(beforDis>=2501&&beforDis<=5600){
        afterDis=beforDis*0.92;
        printf("Total after discount: %.2f\n",afterDis);
        amount=beforDis-afterDis;
        printf("Discount amount: %.2f\n",amount);
    }



}
