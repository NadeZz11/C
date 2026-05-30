#include <stdio.h>
void main(){
    int total;//ยอดรวมราคา
    scanf("%d",&total);
    if(total>=5000){
        if(total<7500){
            float discount = total*0.05;
            float totalPrice = total-discount;
            printf("Total price: %.2f (Discount: %.2f)",totalPrice,discount);
        }
        else if(total<10000){
            float discount = total*0.07;
            float totalPrice = total-discount;
            printf("Total price: %.2f (Discount: %.2f)",totalPrice,discount);
        }
        else if(total>=10000){
            float discount = total*0.10;
            float totalPrice = total-discount;
            printf("Total price: %.2f (Discount: %.2f)",totalPrice,discount);
        }
    }
    else{
        printf("Sorry, You can't get a discount.");
    }

}
