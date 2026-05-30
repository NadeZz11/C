#include <stdio.h>
int main(){
    int n,k,min=9999999,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(abs(k-a[i])<min){
            c=0;
            min=abs(k-a[i]);

        }
        if(abs(k-a[i])==min){
            c++;
        }
    }
    printf("%d\n%d",min,c);

    return 0;
}
