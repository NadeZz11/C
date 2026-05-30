#include <stdio.h>
void main(){
    int w,n;
    scanf("%d%d",&w,&n);
    for(int i=1;i<=3;i++){
       printf("*");
       if(i==1||i==3){

           for(int x=1;x<=n;x++){

               for(int j=1;j<=w;j++){
                    printf("*");
                    if(j==w){
                        printf("*");
                    }
               }
                if(x==n){
                    printf("\n");

                }
           }
       }
       else if(i==2){
             for(int x=1;x<=n;x++){

               for(int j=1;j<=w;j++){
                    printf(" ");
                    if(j==w){
                        printf("*");
                    }
               }
                if(x==n){
                    printf("\n");

                }
           }
       }
    }

}
