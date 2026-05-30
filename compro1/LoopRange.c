#include <stdio.h>
void main(){
    int x,y;
    scanf("%d%d", &x, &y);
    int i=x;
    if(x>y){
        printf("Invalid input");
    }
    else{
        while(i<=y){
            printf("%d ",i);
            i++;
        }
    }

}
