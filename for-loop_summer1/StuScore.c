#include <stdio.h>
void main(){
    int N,score,sum=0,count=0;
    float avg;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&score);
        if(score>=50){
            printf("Pass: %d\n",score);
            sum+=score;
            count++;
        }
        else if (score<50){
            printf("Fail: %d\n",score);
        }
    }
    avg=1.0*sum/count;
    if(count>0){
        printf("Average of passed scores = %.2f",avg);
    }
    else{
        printf("No one passed.");
    }
}
