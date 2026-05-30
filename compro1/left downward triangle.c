#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    //กลับด้าน
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(i==1){
                continue;
            }
            printf("  ");
        }
         for(int j=0;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }

}
