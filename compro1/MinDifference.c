#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=abs(a-b);
    int y=abs(a-c);
    int z=abs(b-c);

    if(x<y&&x<z){
        printf("A B");
    }
    else if (y<x&&y<z){
        printf("A C");
    }
    else if(z<x&&z<y){
        printf("B C");
    }


    return 0;
}
