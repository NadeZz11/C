#include <stdio.h>
void main(){
    int N,sumOdd=0;
    float sumEven=0;//รับจำนวนเต็ม
    int i=1;
    scanf("%d",&N);
    while(i<=N){
        if(i%2!=0){

            int int_val,total_val;
            float float_val;
            scanf("%d%f",&int_val,&float_val);
            total_val=int_val/float_val;
            printf("%d\n",total_val);

            if(total_val>10){
                sumOdd+=total_val;
            }
        }
        else if(i%2==0){
            int int_val1,int_val2;
            float total_val;
            scanf("%d%d",&int_val1,&int_val2);
            total_val= 1.0*int_val1/int_val2;
            printf("%.2f\n",total_val);

            if(total_val>10){
                sumEven+=total_val;
            }
        }
        i++;
    }
    printf("%d\n%.2f\n",sumOdd,sumEven);
    if(sumOdd>sumEven){
        printf("odd");

    }
    else if(sumEven>sumOdd){
        printf("even");
    }
    else{
        printf("equal");
    }


}
