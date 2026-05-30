#include <stdio.h>
int main(){
    int d,m,y,sum=0,sum_2=0,sum_3=0;
    scanf("%d%d%d",&d,&m,&y);
    while(d>0){
        sum+=d%10;
        d=d/10;
    }
    while(m>0){
        sum+=m%10;
        m=m/10;
    }
    while(y>0){
        sum+=y%10;
        y=y/10;
    }
    printf("%d ",sum);
    while(sum>0){
        sum_2+=sum%10;
        sum/=10;
    }
    printf("%d ",sum_2);
    if(sum_2>9){
        while(sum_2>0){
            sum_3+=sum_2%10;
            sum_2/=10;
        }
        printf("%d ",sum_3);
    }
    return 0;
}
