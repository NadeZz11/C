#include <stdio.h>
void main(){
    int water,sugar,count;
    scanf("%d%d",&water,&sugar);
    if(water/500 <= sugar/20){
        count = water/500;
    }else{
        count = sugar /20;
    }

    if(water - (count*500) > 0){
        printf("%d water",count);
    }else{
        printf("%d",count);
    }
}
