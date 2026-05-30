#include <stdio.h>
void main(){
    int  charac_level=1,charac_exp=0,job_level=1,job_exp=0,target_exp,target_job,c_mon;
    scanf("%d%d",&target_exp,&target_job);
    scanf("%d",&c_mon);
    for (int i=0;i<c_mon;i++){
        int exp,job;
        scanf("%d",&exp);
        if(exp==-1){
            printf("Get some rest!");
            break;
        }
        scanf("%d",&job);
        charac_exp+=exp;
        job_exp+=job;
        if(charac_exp>=target_exp){
            charac_exp=charac_exp-target_exp;
            charac_level+=1;
            target_exp=target_exp+(target_exp*20/100);
            printf("Congratulation LVL Up!!\n");

        }
        if(job_exp>=target_job){
            job_exp=job_exp-target_job;
            job_level+=1;
            target_job=target_job+(target_job*10/100);
            printf("Congratulation JOB Up!!\n");

        }

        if(charac_exp<target_exp){
            printf("Level:%d Exp:%d nextExp%d\n",charac_level,charac_exp,target_exp);
        }
        if(job_exp<target_job){
            printf("Job:%d JobExp:%d nextJobExp:%d\n",job_level,job_exp,target_job);
        }
    }

}
