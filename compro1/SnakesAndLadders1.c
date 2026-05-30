#include <stdio.h>
int main(){
    int n,step=0;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<=n;i++){
        if(i==0){
            printf("A ");
        }
        else{
            a[i]=0;
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    while(1){
        int toy;
        scanf("%d",&toy);
        step+=toy;

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
}
