#include <stdio.h>
void main(){
    int i=0;
    int sumEven=0;
    int sumOdd=0;
    while(i<8){
        int x;
        scanf("%d",&x);
        if(x%2==0){
            sumEven+=x;
        }
        else{
            sumOdd+=x;
        }
     i++;
    }
    if(sumEven>sumOdd){
        printf("even\n");
    }
    else if(sumEven<sumOdd){
        printf("odd\n");
    }
    else{
        printf("equal\n");
    }
    printf("%d\n%d",sumEven,sumOdd);


}
