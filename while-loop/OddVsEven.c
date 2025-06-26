#include <stdio.h>

void main(){
    int i=0;
    int sumEven=0,sumOdd=0;
    int num;

    while(i<8){
        scanf("%d",&num);
        if(num%2==0){
            sumEven+=num;
        }
        else{
            sumOdd+=num;
        }
        i++;
    }
    if(sumEven>sumOdd){
        printf("even\n%d\n%d",sumEven,sumOdd);
    }
    else if(sumOdd>sumEven){
        printf("odd\n%d\n%d",sumEven,sumOdd);
    }
    else {
        printf("equal\n%d\n%d",sumEven,sumOdd);
    }
}
