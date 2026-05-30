 #include <stdio.h>
 int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    int z[4]={0,0,0,0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r/2;i++){
        for(int j=0;j<c/2;j++){
            z[0]+=a[i][j];
        }
    }
    for(int i=0;i<r/2;i++){
        for(int j=c/2;j<c;j++){
            z[1]+=a[i][j];
        }
    }
    for(int i=r/2;i<r;i++){
        for(int j=0;j<c/2;j++){
            z[2]+=a[i][j];
        }
    }
    for(int i=r/2;i<r;i++){
        for(int j=c/2;j<c;j++){
            z[3]+=a[i][j];
        }
    }
    printf("%d %d\n%d %d",z[0],z[1],z[2],z[3]);
    return 0;
 }
