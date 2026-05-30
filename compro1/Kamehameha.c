#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("None");
    }else{

    char a[10][n];
    for(int i=0;i<10;i++){
        for(int j=0;j<n;j++){
            a[i][j]='-';
        }
    }
    for(int i=0;i<4;i++){
        int row=3-i;
         for(int j=0;j<n;j++){
           int col=j%5;
            if(row==col){
                a[i][j]='/';
                a[9-i][j]='\\';
            }
            if(col==4){
                a[i][j]='|';
                a[9-i][j]='|';
            }

        }
    }
    for(int i=0;i<10;i++){
         for(int j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    }
    return 0;
}
