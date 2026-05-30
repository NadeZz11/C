#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        for(int j=0;j<x;j++){
            if(x%2==0){
                printf("#");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

}
