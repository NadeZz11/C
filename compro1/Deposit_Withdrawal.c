#include <stdio.h>
void main(){
    int s,x,account=0;
    while(1){
        scanf("%d%d",&s,&x);
        if(x>50000){
            printf("Transaction exceeds the limit\n");
            continue;
        }
        if(s==1){
            if(account+x>100000){
                printf("Account balance is over 100000 Baht");
                break;
            }
            else{
                account+=x;
                printf("Account balance is %d Baht\n",account);
            }
        }
        if(s==2){
            if(account-x<0){
                printf("Account balance is less than 0 Baht");
                break;
            }
            else{
                account-=x;
                printf("Account balance is %d Baht\n",account);
            }
        }
    }

}
