#include <stdio.h>
int main(){
    int n,m,c=0;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==m){
                c=1;
                printf("%d %d\n",i,j);
            }
        }
    }
    if(c==0){
        printf("No");
    }
    return 0;
}
