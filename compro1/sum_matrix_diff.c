#include <stdio.h>
#include <math.h>
void main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&a[r][c]);
        }
    }
    for(int r=0;r<n-1;r++){
        for(int c=1+r;c<n;c++){
            sum+=abs(a[r][c]-a[c][r]);
        }
    }
            printf("%d",sum);

}
