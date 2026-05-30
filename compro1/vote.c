#include <stdio.h>
int main(){
    int n,k,max=-9999999,max_i;
    int a[101];
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        a[i+1]=0;
    }
    for(int i=0;i<k;i++){
        int x;
        scanf("%d",&x);
        a[x]+=1;
    }
    for(int i=0;i<n;i++){
        if(a[i+1]>max){
            max=a[i+1];
            max_i=i+1;
        }
    }
    printf("%d\n%d",max_i,max);

    return 0;
}
