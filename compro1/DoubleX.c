#include <stdio.h>
int main(){
    int r,c,cou=0;
    scanf("%d%d",&r,&c);
    char a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0;i<r;i++){
        if(i<c){
            a[i][i]='*';
            a[r-1-i][i]='*';
        }
    }
    int s=c-r;
    if(s>=0){
        for(int i=0;i<r;i++){
            int x = s+i;
            int y = s+(r-1-i);
            if(x>=0 &&x<c){
                 if(a[i][x]=='*'){
                    cou++;
                 }
                 a[i][x]='#';
            }
            if(y>=0&& y<c){
                if(a[i][y]== '*'){
                    cou++;
                }
                a[i][y]='#';
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    printf("%d",cou);
    return 0;
}
