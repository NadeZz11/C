#include <stdio.h>
int main(){
    int n,max,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&max,&x);
    for(int i=0;i<n;i++){
        printf("%.1f ",a[i]*1.0/max*x);
    }
}
