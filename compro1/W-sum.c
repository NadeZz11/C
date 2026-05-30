#include <stdio.h>
int main(){
    int n,w;
    scanf("%d%d",&n,&w);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-w+1;i++){
        int sum=0;
        for(int j=i;j<i+w;j++){
            sum+=arr[j];
        }
        printf("%d ",sum);
    }


    return 0;
}
