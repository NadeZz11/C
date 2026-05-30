#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(1){
        sum+=n%10;
        n=n/10;
        if(n!=0){
            continue;
        }
        else if(sum<10&&n==0){
            printf("%d\n",sum);
            break;
        }
        else{
            printf("%d\n",sum);
            n=sum;
            sum=0;
        }
    }
    if(sum==9){
        printf("SATHU");
    }
    else{
         printf("No SATHU");
    }

    return 0;
}
