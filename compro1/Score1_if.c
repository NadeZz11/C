#include <stdio.h>
void main(){
    int q,m,f,n;
    double qs,ms,fs,ns,total;
    scanf("%d%d%d%d%lf%lf%lf%lf",&q,&m,&f,&n,&qs,&ms,&fs,&ns);
    qs=qs/q*10;
    ms=ms/m*35;
    fs=fs/f*50;
    ns=ns/n*5;
    total=qs+ms+fs+ns;

    if(total<40){
        printf("%.2f F",total);
    }
    else if(total <80){
        printf("%.2f P",total);
    }
    else{
        printf("%.2f E",total);
    }

}

