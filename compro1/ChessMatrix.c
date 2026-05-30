#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<m;i++){
        if(i%2!=0){
            for(int j=0;j<n;j+=2){
                arr[i][j]+=x;
            }
        }
        else{
            for(int j=1;j<n;j+=2){
                arr[i][j]+=x;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
