#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n/3;a++){
        for(int i=1;i<=3;i++){

            for (int y=1;y<i;y++){
                printf(" ");
            }

            for(int j=1;j<=n/3;j++){
                printf("*  ");

            }

            printf("\n");
        }

    }

}
