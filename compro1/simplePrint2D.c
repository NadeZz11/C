#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&k);
    if(k>0&&k%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(k>0&&k%2!=0){
         for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(k<0&&k%2==0){
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",a[j][i]);
            }
            printf("\n");
        }
    }
    else if(k<0&&k%2!=0){
         for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[j][i]);
            }
            printf("\n");
        }
    }
    else{
        printf("Error");
    }
    return 0;
}
