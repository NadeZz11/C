#include <stdio.h>
void main(){
    int n,max=-9999999;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=max;i>0;i--){
        for(int j=0;j<n;j++){
            if(a[j]<i){
                printf(" ");
            }
            else{
                printf("*");
            }

        }
        //max--;
        printf("\n");
    }

}
