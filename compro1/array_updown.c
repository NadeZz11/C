#include <stdio.h>
int main(){
    int k,y=0;
    scanf("%d",&k);
    int a[k][k],b[2]={0,0};
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=y;i<k;i++){
        for(int j=y+1;j<k;j++){
            b[0]+=a[i][j];
        }
        y+=1;
    }
    y = 0;
    for(int i=y+1;i<k;i++){
        for(int j=0;j<=y;j++){
           b[1]+=a[i][j];
        }
        y+=1;
    }

    printf("%d\n%d",b[0],b[1]);
    return 0;
}

