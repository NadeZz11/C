#include <stdio.h>
void main(){
     int k,n,max=-99999999,c;
        scanf("%d %d",&k,&n);
        for(int i=1;i<=n;i++){
            int sum=0,x=0;
            while(1){
                int n;
                scanf("%d",&n);
                if(n==0){
                    break;
                }
                if(n>0&&n%k==0){
                    x+=1;
                    sum+=n;
                }
            }
            if(x>=max){
                max=x;
                c=i;
            }

        }
        printf("%d %d",c,max);
}
