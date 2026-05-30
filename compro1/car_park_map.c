#include <stdio.h>
void main(){
    int m,n,k;
    scanf("%d%d",&m,&n);
    int a[m][n];
    scanf("%d",&k);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;

        }
    }
    for(int i=0;i<k;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        a[x-1][y-1]=1;
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            if(a[i][j]==0){
               printf("_");
            }
            else{
                printf("x");
            }
        }
        printf("\n");
    }
}
