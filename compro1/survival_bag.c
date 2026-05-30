#include <stdio.h>
void main(){
   int x,y,z,f;
   scanf("%d%d%d",&x,&y,&z);
   if(x/3<y/4){
        f=x/3;
   }
   else if(y/4<z/2){
        f=y/4;
   }
   else if (z/2<y/4){
        f=z/2;
   }
   else{
        f=z/2;
   }
   printf("%d %d %d %d", f,x-(f*3),y-(f*4),z-(f*2));
}

