#include <stdio.h>
void main(){
   int x,y,a,b;
   scanf("%d%d %d%d",&x,&y,&a,&b);
   if(x < 0 ||  x > 8 || y < 0 ||  y > 8 || a < 0 ||  a > 8 ||b < 0 ||  b > 8){
        printf("out of board.");
   }else if((a>=1 && a<=8&& b == y) || (b >=1 && b <= 8 && a == x)){
        printf("Now Rook current position is %d %d",a,b);
   }else{
        printf("Sorry, you can't move to that position. Now Rook current position is %d %d",x,y);
   }
}
