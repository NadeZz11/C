#include <stdio.h>
#include <limits.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int f=0;
    for(int i=0;i<r;i++){
        int min_i = INT_MAX, idx_min = -1,x,y;
        for(int j=0;j<c;j++){
            if(a[i][j]< min_i){
                min_i= a[i][j];
                idx_min =j;
            }
        }
        int max=1,idx_max;
        for( int j=0;j<r;j++){
            if(a[j][idx_min]>min_i){
                max=0;
                x=j;
                y=idx_min;
                break;
            }
        }
        if(max==1){
            printf("(%d, %d) = %d",x,y,a[x][y]);
        }
    return 0;

}
}
