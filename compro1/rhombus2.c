#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a=n/2;
    int b=1;
    for(int i=0;i<=n/2;i++){
        for(int j=0;j<a;j++){
            printf(" ");
        }
        for(int k=0;k<b;k++){
            printf("*");
        }
        printf("\n");
        a--;
        b+=2;

    }
    int x=1;
    int y=n-2;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<x;j++){
            printf(" ");
        }
        for(int k=0;k<y;k++){
            printf("*");
        }
        printf("\n");
        x++;
        y-=2;


    }


}
