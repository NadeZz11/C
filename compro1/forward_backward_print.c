#include <stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        a[i]=a[i]+m;
    }
    if(m>0){
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else if(m<0){
        for(int i=n-1;i>=0;i--){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
