#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&a[r][c]);
        }
    }
    int c_top=0;
    for(int r=1;r<n-1;r++){
        for(int c=1;c<n-1;c++){
            int count=0;
            for(int i=r-1;i<=r+1;i++){
                for(int j=c-1;j<=c+1;j++){
                    if(a[r][c]>a[i][j]){
                        count++;
                        //printf("%d %d %d\n",a[r][c],r,c );
                    }
                }

            }
            if(count==8){
               c_top++;
            }

        }
    }
    printf("%d\n",c_top);
    for(int r=1;r<n-1;r++){
        for(int c=1;c<n-1;c++){
            int count=0;
            for(int i=r-1;i<=r+1;i++){
                for(int j=c-1;j<=c+1;j++){
                    if(a[r][c]>a[i][j]){
                        count++;

                    }
                }

            }
            if(count==8){
               printf("%d %d %d\n",a[r][c],r,c );
            }

        }
    }
}
