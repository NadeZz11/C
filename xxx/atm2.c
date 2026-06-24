#include <stdio.h>
void main(){
    int Balance,option,amt;
    scanf("%d%d%d",&Balance,&option,&amt);
    if(option == 1){
        if(Balance < amt){
            printf("Sorry, you can not withdraw money.");
        }else{
            Balance -= amt;
            printf("%d",Balance);
        }
    }else if(option == 2){
        Balance += amt;
        printf("%d",Balance);
    }

}
