#include <stdio.h>
void main(){
    int c=0;
    int x;
    scanf("%d",&x);
    while(1>0){
        int y;
        scanf("%d",&y);
        if(y==0){
            break;
        }
        else if(y==x){
            c+=1;
        }

    }
    if(c>0){
        printf("%d",c);
    }
    else{
        printf("None");
    }

}
