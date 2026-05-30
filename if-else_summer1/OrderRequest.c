#include <stdio.h>
void main(){
    int b,s,d,c,t;
    scanf("%d%d%d%d%d",&b,&s,&d,&c,&t);

    if(s%b==0&&d%b==0&&c%b==0&&t%b==0){
        printf("You can confirm this order.");
    }

    while(s>2&&d>1&&c>5&&t>4&&b==0){
        s=s-2;
        d=d-1;
        c=c-5;
        t=t-4;
        b--;
    }

    if(s<2){
        int x = 2-s;
        printf("Need %d more snacks.",x);
    }
    if(d<1){
        int x = 1-d;
        printf("Need %d more drinks.",x);
    }
    if(c<5){
        int x = 5-c;
        printf("Need %d more candies.",x);
    }
    if(t<4){
        int x = 4-t;
        printf("Need %d more tissues.",x);
    }

}
