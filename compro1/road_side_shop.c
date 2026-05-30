#include <stdio.h>
void main(){
    int n,k,max=-9999999;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i-k;j<=i+k;j++){
            if(j>0&&j<n){
               sum+=a[j];
            }
        }
        if(sum>max){
            max=sum;
        }
    }
    printf("%d",max);
}
