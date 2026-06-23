#include <stdio.h>
void main(){
    while(1){
        int x,y,sum = 0;
        scanf("%d",&x);
        if(x == -1){
            break;
        }
        x = abs(x);
        y = x%10;
        x/=10;
        while(x!=0){
            sum+=x%10;
            x/=10;
        }
        printf("%c\n",sum*y);
    }
}
