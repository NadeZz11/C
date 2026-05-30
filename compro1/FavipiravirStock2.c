#include <stdio.h>
void main(){
    int s_favi,s_fata,w,o,n;
    float t;
    scanf("%d%d%d",&s_favi,&s_fata,&n);
    for(int i=0;i<n;i++){
        int u_favi=0,u_fata=0;
        scanf("%d%f%d",&w,&t,&o);
        if(t>=37.5&&o<90){
            u_favi=3*w;
            u_fata+=4*u_favi+120;
        }
        else if(t>=37.5&&o>=90){
            u_favi=2*w;
            u_fata+=4*u_favi+120;
        }
        else if(t<37.5&&o<90){
            u_favi=2*w;
            u_fata+=4*u_favi+120;
        }
        else{
            u_fata+=120;
        }

        if(s_favi<u_favi&&s_fata<u_fata){
            printf("Not enough both\n");
        }
        else if(s_favi<u_favi){
            printf("No Favipiravir\n");
            s_fata-=u_fata;
        }
        else if(s_fata<u_fata){
            printf("No capsule\n");
            s_favi-=u_favi;
        }
        else{
            printf("OK\n");
            s_fata-=u_fata;
            s_favi-=u_favi;

        }

    }
    printf("%d %d",s_favi,s_fata);
}
