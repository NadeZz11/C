#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(b>a&&b>c){
            printf("max %d ",b);
        }
        else if(b<a&&b<c){
            printf("min %d ",b);
        }
        while(1){
            int x;
            scanf("%d",&x);
            if(x==0){
                break;
            }
            a=b;
            b=c;
            c=x;
            if(b>a&&b>c){
                printf("max %d ",b);
            }
            else if(b<a&&b<c){
                printf("min %d ",b);
            }
        }
        printf("\n");
    }
    return 0;
}
