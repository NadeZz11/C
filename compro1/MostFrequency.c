#include <stdio.h>
int main(){
    int n=0,dif=0;
    int a[1000000];
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        a[n]=x;
        n++;
    }
    int b[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            b[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        int f=0;
        for(int j=0;j<dif;j++){
            if(b[j][0]==a[i]){
                b[j][1]++;
                f=1;
                break;
            }
        }
        if(f==0){
            b[dif][0]= a[i];
            b[dif][1]=1;
            dif++;
        }
    }
    printf("%d\n",n);
    int max=0;
    for(int i=0;i<dif;i++){
        if(b[i][1]>max){
            max=b[i][1];
        }
    }
    for(int i=0;i<dif;i++){
        if(b[i][1]==max){
            printf("%d ",b[i][0]);
        }
    }

    return 0;
}
