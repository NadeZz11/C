#include <stdio.h>
int main(){
    int n,num,target;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i-1]);
    }
    scanf("%d",&target);
    for(int i=1;i<=n;i++){
        if(a[i-1]==target){
            printf("%d ",i);
        }
    }
    return 0;
}
