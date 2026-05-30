#include <stdio.h>
double average(int* array){
    double avg,sum=0;
    for(int i=0;i<8;i++){
        sum+=array[i];
    }
    avg=sum/8;
    return avg;
}
double variance(int* array, double avg){
    double sum=0;
    for(int i=0;i<8;i++){
        sum +=(array[i]-avg)*(array[i]-avg);
    }
    return sum/7;
}
int main(){
    int n=8;
    int arr[n];
    double avg,var;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    avg = average(arr);
    var=variance(arr,avg);
    printf("%.2f %.2f",avg,var);
    return 0;
}
