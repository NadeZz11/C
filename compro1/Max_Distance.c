#include <stdio.h>
void main(){
    int min,max,x=0;
    while(1){
        scanf("%d%d",&min,&max);
        if(min==0&&max==0){
            break;
        }
        if(max-min>x){
            x=max-min;
        }

    }
    printf("%d",x);

}
