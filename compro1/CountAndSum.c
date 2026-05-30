#include <stdio.h>
void main(){
    int k,i=0,x=0,sum=0;
    scanf("%d",&k);
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        i++;
        if(n>0&&n%k==0){
            x+=1;
            sum+=n;
        }

    }
    printf("%d\n%d\n%d",i,x,sum);
}



