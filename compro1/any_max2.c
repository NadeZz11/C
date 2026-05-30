
#include <stdio.h>
void main(){
    int num=0,target=0,countTid=1,maxTid=0,numlast;
    while(1){
        scanf("%d",&target);
        if(target==0){
            break;
        }
        if(num==target){
            countTid++;
        }
        else{
            countTid=1;
        }
        if(countTid>maxTid){
            maxTid=countTid;
            numlast = target;
        }
        num = target;
    }

    printf("%d\n%d",maxTid,numlast);

}
