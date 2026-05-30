#include <stdio.h>
int main(){
    int sum=1;
    int n;
    scanf("%d",&n);
    while(n>0){
        int x;
        x=n%10;
        printf("%d x %d\n",x,sum);
        n=n/10;
        sum*=10;
    }
    return 0;
}
