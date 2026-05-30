#include <stdio.h>
int main(){
    int n,x,y,sum=0,c=0;
    //float sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++){
        if(x<=a[i]&&a[i]<=y){
            c++;
            sum+=a[i];
        }
    }
    if(c==0){
        printf("0\nnone");
    }
    else{
        printf("%d\n%.2f",c,sum*1.0/c);
    }
    return 0;
}
