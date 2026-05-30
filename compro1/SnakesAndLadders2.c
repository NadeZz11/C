#include <stdio.h>
int main(){
    int n,step=0;
    scanf("%d",&n);
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++){
        if(i==0){
            printf("A ");
        }
        else{
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    while(1){
        int toy;
        scanf("%d",&toy);
        step+=toy;
        for(int i=step;i==step;i++){
            step+=a[i];
            if(step<=0){
                step=1;
            }
            else if(step>=n){
                step=n;
            }
            break;
        }
        for(int i=0;i<=n;i++){
            if(step>i&&step>n){
                step=step-(step-n);
            }
            if(i==0){
                printf("X ");
            }
            else if(i==step){
                printf("A ");
            }
            else{
                printf("%d ",a[i]);
            }
        }
        printf("\n");
        if(step==n){
            break;
        }
    }
    return 0;
}
