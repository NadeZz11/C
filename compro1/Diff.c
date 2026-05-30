#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    if(k==1){
        for(int i=1;i<n;i++){
            printf("%d ",a[i]-a[i-1]);
        }
    }
    else if(k==2){
         for(int i=n-2;i>=0;i--){
            printf("%d ",a[i]-a[i+1]);
        }
    }
    return 0;
}
