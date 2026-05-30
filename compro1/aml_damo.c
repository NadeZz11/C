#include <stdio.h>
void main(){
    int x,f,c_1=0;
    scanf("%d",&x);
    for(int i=1;i<=9;i++){
        if(x%i==0){
            c_1+=1;
        }
        //if(c_1==1){
            //if(x>9){
                //c_1++;
            //}
            //break;
        //}
    }
    if(c_1==1&&x%x==0){
        c_1+=1;
    }
    //printf("%d heee\n", c_1);
    if(c_1==2){
        printf("%d is prime",x);
    }
    else {
        printf("%d is not prime",x);
    }
}

