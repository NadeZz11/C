#include <stdio.h>
void main(){
    int N,sum=0,total=0;
    while(1){
        scanf("%d",&N);
        if (N==0){
            printf("%d\n",total);
            break;
        }
        total=sum+=N;
    }
    if(total>0){
        printf("positive");
    }
    else if (total<0){
        printf("negative");
    }
    else{
        printf("zero");
    }
}
