#include <stdio.h>
void derivative(int* arr,int n){
    for(int i=0;i<n;i++){
        if(i==0){
            printf("0 ");
        }
        else printf("%d ",arr[i]-arr[i-1]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    derivative(arr,n);
    return 0;
}
