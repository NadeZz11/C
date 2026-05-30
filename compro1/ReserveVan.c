#include <stdio.h>
void main(){
   int d1,d2,d3;
   scanf("%d%d%d",&d1,&d2,&d3);
   if(d1<=d2&&d1<=d3){
        printf("A");
   }
   else if(d2<d1&&d2<=d3){
        printf("B");
   }
   else if(d3<d1&&d3<d2){
        printf("C");
   }

}
