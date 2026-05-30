#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          a[1][j]=1;
          a[n][j]=1;
          if(i!=2||i!=n-1||j!=2||j!=n-1){
            a[i][j]=1;
          }
          else{
            a[i][j]=0;
          }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
