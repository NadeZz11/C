#include <stdio.h>
void main(){
    int n,target,count=0;
    scanf("%d%d",&n,&target);
     while(1){
        if(n<0){
            printf("Out of range");
            break;
        }
        else{
            if(n%10==target){
                count+=1;
            }
            n=n/10;
        }
        if(n%10==0&&n==0){
            break;
        }
    }
    if(count==0&&n>=0){
        printf("None");
    }
    else if(n>=0){
        printf("%d",count);
    }

}
