#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(x==1&&y==3){
        z=1;
    }
    else if(x==3&&y==1){
        z=2;
    }
    else if(x>y){
        z=1;
    }
    else if(y>x){
        z=2;
    }
    else{
        z=0;
    }
    printf("%d",z);


    return 0;
}



