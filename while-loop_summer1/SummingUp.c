#include <stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int i=1;
    int total=0;
    while(i<=N){
        total+=i;
        i++;
    }
    printf("%d\n",total);


    if (total%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
