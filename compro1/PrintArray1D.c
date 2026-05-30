#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i+=x){
        printf("%d ",a[i]);
    }
    return 0;
}
