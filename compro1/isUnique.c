#include <stdio.h>
int isUnique(int* arData,int n){
    int y=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arData[i]==arData[j]){
                    y=0;
                    break;
                }
            }
        }
    }
    return y;
}
int main(){
    int n,x;
    scanf("%d",&n);
    int arData[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arData[i]);
    }
    x=isUnique(arData,n);
    printf("%d",x);
    return 0;
}
