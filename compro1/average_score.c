#include <stdio.h>
int main(){
    int n;
    double avg=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        avg+=a[i];
    }
    avg=avg/n;
    printf("%lf",avg);
    return 0;
}
