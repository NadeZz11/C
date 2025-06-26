#include <stdio.h>

void main(){
    int x;
    float y;
    scanf("%d%f",&x,&y);

    printf("%d %.2f\n",x,y);
    printf("%.2f %d\n",y,x);
    printf("%d\n",x);
    printf("%.2f\n",y);
}
