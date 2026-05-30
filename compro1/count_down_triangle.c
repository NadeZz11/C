#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int s=n;s>i;s--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%d",i%10);
        }
        printf("\n");
    }

}
