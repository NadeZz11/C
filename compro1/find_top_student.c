#include <stdio.h>
int main(){
    int n,k,max=-9999999,c=0,p;
    scanf("%d%d",&n,&k);
    int a[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<k;j++){
            x+=a[i][j];
        }
        if(x>max){
            max=x;
            p=i;
        }
    }
    for(int j=0;j<k;j++){
        int z_max=a[p][j],c_max=0;
        for(int i=0;i<n;i++){
            if(z_max>=a[i][j]){
               c_max++;
            }
            if(c_max==n){
                c++;
            }
        }
    }
    printf("%d\n%d",max,c);
    return 0;
}
