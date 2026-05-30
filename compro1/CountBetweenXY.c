#include <stdio.h>
void main(){
    int x,y,f,c=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        f=y;
        y=x;
        x=f;
    }
    while(1){
        int a;
        scanf("%d",&a);
        if(a<0){

            break;
        }
        if(x<=a&&a<=y){
            c++;
        }
    }
    printf("%d",c);

}
