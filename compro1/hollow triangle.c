#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(j==0||j==i-1){
                printf("* ");
            }
            else{
                if(i!=n){
                    printf("  ");
                }
                else{
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
}
