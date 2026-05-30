#include <stdio.h>
double average(int* array,int n){
    double avg,sum=0;

    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    avg=sum/n;
    return avg;

}
double variance(int* array, double avg,int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum +=(array[i]-avg)*(array[i]-avg);
    }
    return sum/(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    double avg,var;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    avg = average(arr,n);
    var=variance(arr,avg,n);
    printf("%.2f %.2f",avg,var);
    return 0;
}
