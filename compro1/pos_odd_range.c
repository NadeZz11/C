#include <stdio.h>
void main(){
    int x;
    int min=9999999,max=-9999999;
    while(1){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        if(x%2!=0){
            if(x<min){
                min=x;
            }
            if(x>max){
                max=x;
            }
        }

    }
    printf("%d\n%d\n%d",max,min,max-min);

}

