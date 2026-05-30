#include <stdio.h>
void main(){
    int x,y;
    scanf("%d%d", &x, &y);
    int i=x;
    if(x>y){
        while(i>=y){
            printf("%d ",i);
            i--;
        }
    }
    else{
        while(i<=y){
            printf("%d ",i);
            i++;
        }
    }

}
