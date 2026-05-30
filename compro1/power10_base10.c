#include <stdio.h>
int main(){
    double n,sum=10;
    scanf("%lf",&n);
    if(n==0){
        printf("1");
    }
    else{
        for(int i=0;i<n-1;i++){
            sum*=10;
        }
        printf("%.0f",sum);
    }
    return 0;
}
