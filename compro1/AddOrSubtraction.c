#include <stdio.h>
int main(){
    int k,r;
    scanf("%d",&k);
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        else{
            if(x>k){
                k=k-x;
                printf("%d\n",k);
            }
            else if(x<=k){
                k=k+x;
                printf("%d\n",k);
            }

        }
    }

    return 0;
}
