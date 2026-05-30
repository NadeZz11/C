#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i]=0;
    }
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        else{
            c+=1;
            arr[x]+=1;
        }
    }
    for(int i=1;i<=n;i++){
        float y;
        y = (arr[i]*1.0)/c*100;
        printf("%.2f%%\n",y);
    }
    return 0;
}
