#include <stdio.h>
int main(){
    int x=0,max=-99999999,c_max,min=9999999,c_min,sum_avg=0;
    while(1){
        int n,sum=0;
        scanf("%d",&n);
        if(n<=0){
            break;
        }
        x++;
        for(int i=1;i<=n;i++){
            int a;
            scanf("%d",&a);
            sum+=a;
        }
        if(sum>max){
            max=sum;
            c_max=x;
        }
        if(sum<min){
            min=sum;
            c_min=x;
        }
        sum_avg+=sum;
        printf("%d\n",sum);
    }
    printf("%d %d\n",c_max,max);
    printf("%d %d\n",c_min,min);
    printf("%.2f",sum_avg*1.0/x);


    return 0;
}
