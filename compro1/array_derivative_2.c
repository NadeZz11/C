#include <stdio.h>
void derivative(int* a,int* b,int n){
    a[0]=0;
    for(int i=0;i<n;i++){
        b[i]=a[i]-a[i-1];
    }
}
int main(){
    int n,deri;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    deri=derivative(a,b,n);
    for(int i=0;i<n;i++){
        printf("%d",b[i]);
    }
    return 0;
}
