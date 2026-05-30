#include <stdio.h>
void main(){
    int s_favi,s_fata,w,o;
    float t;
    scanf("%d%d%d%f%d",&s_favi,&s_fata,&w,&t,&o);
    int u_favi=0,u_fata=120;
    if(t>=37.5&&o<90){
        u_favi=3*w;
        u_fata+=4*u_favi;
        s_favi-=u_favi;
        s_fata-=u_fata;
    }
    else if(t>=37.5&&o>=90){
        u_favi=2*w;
        u_fata+=4*u_favi;
        s_favi-=u_favi;
        s_fata-=u_fata;
    }
    else if(t<37.5&&o<90){
        u_favi=2*w;
        u_fata+=4*u_favi;
        s_favi-=u_favi;
        s_fata-=u_fata;
    }
    else{
        s_fata-=120;
    }
    printf("%d %d\n%d %d",u_favi,u_fata,s_favi,s_fata);

}
