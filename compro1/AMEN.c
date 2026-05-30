#include <stdio.h>
void main(){
    int n,c_amen=0;
    scanf("%d",&n);
    while(1){
        if(n%10==0&&n==0){
            break;
        }
        if(n%100==12){
            c_amen+=1;
        }
        n=n/10;
    }
    if(c_amen==0){
        printf("Hope to find AMEN next time");
    }
    else{
        for(int i=0;i<c_amen;i++){
            printf("AMEN ");
        }
    }

}
