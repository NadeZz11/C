#include <stdio.h>
void main(){
    int target;
    scanf("%d",&target);
    int total=0;
    int countTid=0;
    int tidMax=0;
    int num;
    while(1){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        if(num==target){
            total++;
            countTid++;
            if(countTid>tidMax){
                tidMax=countTid;
            }
        }
        else{
            countTid=0;
        }
    }
    printf("%d\n%d",tidMax,total);
}
