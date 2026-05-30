#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    if(n<0){
        n=n*-1;
    }
    for(int i=1;i<=n;i++){
        int k;
        for(k=1;k<=i;k++){
            printf("%d ",k%10);
        }
        for(int j=1;j<=n-k+1;j++){
            printf("%d ",i%10);
        }
        printf("\n");
    }

    return 0;
}
