#include <stdio.h>
void main(){
    int x,y,c_mon;
    scanf("%d%d",&x,&y);
    if(x%y==0){
        c_mon=x/y;
    }
    else{
        c_mon=(x/y)+1;
    }
    printf("%d",c_mon);

}
