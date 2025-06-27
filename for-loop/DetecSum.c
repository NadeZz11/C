#include <stdio.h>
void main(){
    int N,num;
    int sumOdd=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        if(num%2==0){
            printf("Even number: %d\n",num);
        }
        else if (num%2!=0){
            printf("Odd number: %d\n",num);
            sumOdd+=num;
        }
    }
    printf("Total of odd numbers = %d",sumOdd);
}
