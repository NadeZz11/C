#include <stdio.h>
void main(){
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    if(a/60>=n&&b/120>=n){
        printf("Order complete\n");
        printf("Americano : %d",n);
    }
    else{
        printf("Order incomplete\n");
        printf("No ingredients");
    }
}
