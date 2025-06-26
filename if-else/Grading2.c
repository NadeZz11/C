#include <stdio.h>

void main(){
   int p,m,f;
   scanf("%d%d%d",&p,&m,&f);
   int score = p+m+f;
   if (p>=0&&p<=40 &&m>=0&&m<=30 &&f>=0&&f<=30){
        if(score>=80){
            printf("A (Congratulations!)");
        }
        else if(score>=70&&score<=79){
            int total = 80-score;
            printf("B (Need more %d to get A)",total);
        }
        else if(score>=60&&score<=69){
            int total = 70-score;
            printf("C (Need more %d to get B)",total);
        }
        else if(score>=40&&score<=59){
            int total = 60-score;
            printf("D (Need more %d to get C)",total);
        }
        else if(score>=0&&score<=39){
            int total = 40-score;
            printf("F (Need more %d to get D)",total);
        }
   }
   else{
    printf("Invalid input");
   }
}

