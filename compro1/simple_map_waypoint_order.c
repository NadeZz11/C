#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d",&x,&y);
    int map[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            map[i][j]=0;
        }
    }
    scanf("%d",&z);
    for(int i=1;i<=z;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        map[a-1][b-1]=i;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
