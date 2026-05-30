#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y){
            int  k;
            k=x;
            x=y;
            y=k;
        }
        for(int j=x;j<=y;j++){
            printf("%d ",j);
        }
        printf("\n");
    }


    return 0;

}
