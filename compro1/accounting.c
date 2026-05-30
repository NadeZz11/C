#include <stdio.h>
void main(){
    int cX=0,cY=0,Income=0,Expen=0,total=0;
    while(1){
        int x,y;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        scanf("%d",&y);
        if(x==1){
            cX++;
            Income+=y;
        }
        else if(x==2){
            cY++;
            Expen+=y;
        }
    }
    printf("%d %d\n",cX,cY);
    printf("%d %d %d",Income,Expen,Income-Expen);
}
