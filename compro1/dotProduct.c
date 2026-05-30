#include <stdio.h>
int main(){
    int m,n,x,y,sum=0;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d%d",&x,&y);
    for(int j=0;j<n;j++){
        sum+=arr[x-1][j]*arr[y-1][j];
    }
    printf("%d",sum);
    return 0;
}
