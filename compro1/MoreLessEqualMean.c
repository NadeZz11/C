#include <stdio.h>
int average(int* arr,int n){
    int avg,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    return avg;
}
int main(){
    int n,avg,more=0,less=0,equal=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    avg=average(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            more++;
        }
        else if(arr[i]==avg){
            equal++;
        }
        else{
            less++;
        }
    }
    printf("%d\n",avg);
    printf("%d %d %d",more,less,equal);
    return 0;
}
