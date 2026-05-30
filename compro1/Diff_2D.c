#include <stdio.h>
int main(){
    int r,c,k;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&k);
    if(k==1){
        for(int i=0;i<r;i++){
            for(int j=0;j<c-1;j++){
                printf("%d ",a[i][j+1]-a[i][j]);
            }
            printf("\n");
        }
    }
    else if(k==2){
         for(int i=0;i<r-1;i++){
            for(int j=0;j<c;j++){
                printf("%d ",a[i+1][j]-a[i][j]);
            }
            printf("\n");
        }


    }
    return 0;
}
