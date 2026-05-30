#include <stdio.h>
void main(){
    int x,y,a=0,b=0,c=0;
    scanf("%d%d",&x,&y);
    while(1){
       int j;
       scanf("%d",&j);
       if(j<=0){
            break;
       }
       if(j%x==0&&j%y!=0){
            a+=j;
       }
       if(j%y==0&&j%x!=0){
            b+=j;
       }
       if(j%x==0||j%y==0){
            c+=j;
       }

    }
    printf("%d\n%d\n%d",a,b,c);

}
