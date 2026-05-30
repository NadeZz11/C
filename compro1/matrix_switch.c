#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&x);
    if(x==1){
        for(int i=0;i<n;i++){
            for(int j=n/2;j<n;j++){
                printf("%d ",a[i][j]);
            }
            for(int j=0;j<n/2;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

    }
    else{
        for(int i=n/2;i<n;i++){
           for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<n/2;i++){
           for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
