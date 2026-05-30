#include <stdio.h>
void main(){
    int n,cen;
    scanf("%d",&n);
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1){
                a[i][j]='*';
            }
            if(j==0||j==n-1){
                a[i][j]='*';
            }
            if(i>=(n-5)/2&&i<((n-5)/2)+5){
                a[i][j]='*';
            }
            if(j>=((n-5)/2)&&j<((n-5)/2)+5){
                a[i][j]='*';
            }
            if(i==j){
                a[i][j]='*';
                a[i][j-1]='*';
                a[i][j+1]='*';
                a[i][(n-1)-i]='*';
                a[i][(n-1)-i+1]='*';
                a[i][(n-1)-i-1]='*';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
