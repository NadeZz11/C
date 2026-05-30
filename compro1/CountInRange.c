#include <stdio.h>
void main(){
    int x,y,between=0,less=0,over=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        int j;
        j=x;
        x=y;
        y=j;
    }
    while(1){
        int a;
        scanf("%d",&a);
        if(a==0){
            break;
        }
        if(x<a&&a<y){
            between++;
        }
        if(a<x&&a<y){
            less++;
        }
        if(a>x&&a>y){
            over++;
        }
    }
    printf("%d\n%d\n%d",between,less,over);

}
