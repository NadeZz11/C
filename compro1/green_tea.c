#include <stdio.h>
void main(){
    for(int i=0;i<7;i++){
        int w,s,amount,x;
        scanf("%d%d", &w,&s);
        if((w/250)<=(s/15)){
            amount=w/250;
        }
        else if((s/15)<(w/250)){
            amount=s/15;
        }

        x=w-(250*amount);
        if(x>0){
            printf("%d water\n",amount);
        }
        else{
            printf("%d\n",amount);
        }
    }

}
