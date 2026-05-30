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
        if(a<60*n){
            printf("No Coffee : %d\n",n*60-a);
        }
        if(b<120*n){
            printf("No Water : %d\n",n*120-b);
        }
    }

}
