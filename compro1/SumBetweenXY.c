#include <stdio.h>
void main(){
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        int f;
        f=x;
        x=y;
        y=f;
    }
    while(1){
        int a;
        scanf("%d",&a);
        if(a<=0){
            break;
        }
        if(x<=a&&a<=y){
            sum+=a;
        }
    }
    printf("%d",sum);

}
