#include <stdio.h>
void main(){
    int r,c,num=1;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(num<=r*c){
                printf("%d ",num);
                num++;
            }

        }
        printf("\n");
    }
}
