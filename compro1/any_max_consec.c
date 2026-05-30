#include <stdio.h>
void main(){
    int num,target=0,total=0,countTid=0,maxTid=0;
    while(1){
        scanf("%d",&num);

        if(num==0){
            break;
        }
        else{
            target=num;
            printf("target now %d",target);
            scanf("%d",&num);
            if(num==target){
                printf("num now %d",num);
                countTid++;
                if(countTid>maxTid){
                    maxTid=countTid;
                }
            }
            else{
                target=num;
                printf("targetnow2 %d",target);
                countTid=0;
            }
        }


    }
    printf("%d",maxTid);

}
