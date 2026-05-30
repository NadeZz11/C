#include <stdio.h>
void main(){
    int cIn=0,cEx=0,x,in=0,ex=0;
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x>0){
            cIn++;
            in+=x;
        }
        else if(x<0){
            cEx++;
            ex+=x;
        }
    }

    if(in>=abs(ex)){
        printf("%d %d\n%d\n%d\ndebit",cIn,cEx,in,ex);
    }
    else{
        printf("%d %d\n%d\n%d\ncredit",cIn,cEx,in,ex);
    }

}
