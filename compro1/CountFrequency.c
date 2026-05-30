#include <stdio.h>
int main(){
    int n,diff=0;
    scanf("%d",&n);
    int arr[n][2],c[n];

    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }

    for(int i=0; i<n; i++){
        int f=0;
        for(int j=0;j<diff;j++){
            if(arr[j][0]==c[i]){
                arr[j][1]++;
                f=1;
                break;
            }
        }
        if(f==0){
            arr[diff][0]=c[i];
            arr[diff][1]=1;
            diff++;
        }
    }
    printf("%d\n",diff);
    for(int i=0;i<diff;i++){
        printf("%d %d\n",arr[i][0],arr[i][1]);

    }
    return 0;
}
