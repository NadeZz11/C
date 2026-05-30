#include <stdio.h>
void main(){
    int x;
    int i=0;
    int f=9999999;
    int y;
    scanf("%d",&x);
    while(i<8){
        int k;
        scanf("%d", &k);
        if(abs(x-k)<f){
            f=abs(x-k);
            y = k;

        }

        i++;
    }
    printf("%d",y);

}
