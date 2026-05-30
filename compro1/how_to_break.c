#include <stdio.h>
void main(){
    int i=0;
    while(1>0){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        else{
            i++;
        }
    }
    printf("%d", i);

}
