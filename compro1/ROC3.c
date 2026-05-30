#include <stdio.h>
void main(){
   int target_exp,charac_level=1,charac_exp=0;
   scanf("%d",&target_exp);
   while(1){
        int exp;
        scanf("%d",&exp);
        if(exp<0){
            break;
        }
        charac_exp+=exp;
        if(charac_exp<target_exp){
            printf("Level:%d Exp:%d nextExp:%d\n",charac_level,charac_exp,target_exp);

        }
        else if(charac_exp>=target_exp){
            charac_exp=charac_exp-target_exp;
            charac_level+=1;
            target_exp=target_exp+(target_exp*20/100);
            printf("Congratulation LVL Up!!\n");
            printf("Level:%d Exp:%d nextExp:%d\n",charac_level,charac_exp,target_exp);
        }

   }
}
