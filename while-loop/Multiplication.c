#include <stdio.h>

void main(){
    int M,F;
    scanf("%d%d",&M,&F);
    int i=1;
    while(i<=F){
        printf("%d x %d = %d\n",M,i,M*i);
        i++;
    }
}
