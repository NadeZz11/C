#include <stdio.h>
void main(){
    int a,b,c,d,e,target_bank,x,ans;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&target_bank);
    a=a*20;
    b=b*50;
    c=c*100;
    d=d*500;
    e=e*1000;
    x=a+b+c+d+e;

    if(target_bank==1){
        ans=x/20;
        printf("%d\n",ans);
        if(x%20){
            printf("%d",20-(x%20));
        }
    }
    else if(target_bank==2){
        ans=x/50;
        printf("%d\n",ans);
        if(x%50){
            printf("%d",50-(x%50));
        }
    }
     else if(target_bank==3){
        ans=x/100;
        printf("%d\n",ans);
        if(x%100){
            printf("%d",100-(x%100));
        }
    }
     else if(target_bank==4){
        ans=x/500;
        printf("%d\n",ans);
        if(x%500){
            printf("%d",500-(x%500));
        }
    } else if(target_bank==5){
        ans=x/1000;
        printf("%d\n",ans);
        if(x%1000){
            printf("%d",1000-(x%1000));
        }
    }



}
