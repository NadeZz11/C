#include <stdio.h>
int countMax(int* arData,int n){
    int num_max=-99999999,c_max=0;
    for(int i=0;i<n;i++){
        if(arData[i]>num_max){
            num_max=arData[i];
        }
    }
    for(int i=0;i<n;i++){
        if(num_max==arData[i]){
            c_max+=1;
        }
    }
    return c_max;
}
int main(){
    int n,c_max;
    scanf("%d",&n);
    int arData[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arData[i]);
    }
    c_max=countMax(arData,n);
    printf("%d",c_max);
    return 0;
}
