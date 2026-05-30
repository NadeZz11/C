#include <stdio.h>
void main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
        int a;
        a=y;
        y=x;
        x=a;
    }
    for(int j=x;j<=y;j++){
        printf("%d:",j);
        for(int i=1;i<=z;i++){
            printf(" %d",j*i);
        }
        printf("\n");
    }


}
