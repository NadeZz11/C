#include <stdio.h>
int insert(int* arr,int x,int y,int n){
    if(y>n){
        arr[y]=x;
    }
    for(int i=n;i>=y;i--){
        arr[i+1]=arr[i];
        if(i==y){
            arr[i]=x;
        }
    }
    n++;
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return n;
}
int main(){
    int a[1001];
    a[0]=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while(1){
        int x,y;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        else{
            scanf("%d",&y);
            n=insert(a,x,y,n);
        }
    }
    return 0;
}
