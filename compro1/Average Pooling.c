#include <stdio.h>
int main(){
    int m,n;
    scanf("%d",&m);
    int input[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&input[i][j]);
        }
    }
    scanf("%d",&n);
    int output[m/n][m/n];
    for(int i=0;i<m-(n-1);i+=n){
        for(int j=0;j<m-(n-1);j+=n){
                //àªç¤
            int sum=0;
            for(int x=i;x<i+n;x++){
                for(int y=j;y<j+n;y++){
                    sum+=input[x][y];
                }

            }
            //printf("%d ",sum/(n*n));
            output[i][j]=sum/(n*n);

        }
    }
    for(int i=0;i<m-(n-1);i+=n){
        for(int j=0;j<m-(n-1);j+=n){
            printf("%3d ",output[i][j]);
        }
        printf("\n");
    }
    return 0;
}



