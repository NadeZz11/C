#include <stdio.h>
#include <limits.h>
void main(){
    int N,count=0;
    //int min = INT_MAX;
    int max = INT_MIN;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        int number;
        scanf("%d",&number);
        if(number%2==0){
            count++;
            if(number>max){
                max=number;
            }

        }
    }
    if(count==0){
        printf("No even number\n");
    }
    else{
        printf("%d",max);
    }

}
