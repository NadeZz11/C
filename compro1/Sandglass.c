#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    scanf("%d",&n);
    n=abs(n);
    int a1=0;
    int b1=n;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<a1;j++){
            printf(" ");
        }
        for(int k=0;k<b1;k++){
            printf("*");
        }
        printf("\n");
        a1++;
        b1-=2;
    }

    int a = n/2;
    int b = 1;
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
}
