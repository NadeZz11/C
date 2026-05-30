#include <stdio.h>
int main(){
    int m,n,c_pass=0;
    scanf("%d%d",&m,&n);
    int sum_s[m+1];
    int test[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&test[i][j]);
        }
    }
    float avg=0;
    for(int j=1;j<=m;j++){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=test[i][j];
            printf("%d ",test[i][j]);
        }
        sum_s[j]=sum;
        avg+=sum;
        printf("%d\n",sum);
    }
    avg/=m;
    printf("average = %.2f\n",avg);
    for(int j=1;j<=m;j++){

        if(sum_s[j]>=avg){
            c_pass++;
        }
    }
    printf("pass %d\n",c_pass);
    for(int j=1;j<=m;j++){

        if(sum_s[j]>=avg){
            printf("%d ",j);
        }
    }
    return 0;
}
