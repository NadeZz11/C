#include <stdio.h>
#include <math.h>
int main(){
    int n,r,c,cou=0,min=99999999,max=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&r,&c);
    for(int i=0;i<n;i+=r){
        for(int j=0;j<n;j+=c){
            printf("%d ",a[i][j]);
            cou++;
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
        printf("\n");
    }
    printf("%d\n%d\n%d",cou,max,min);
    return 0;
}
