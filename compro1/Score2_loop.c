#include <stdio.h>
void main(){
    int x,cf=0,cp=0,ce=0;
    int q,m,f,n;
    scanf("%d",&x);
    double qs,ms,fs,ns,total;
    scanf("%d%d%d%d",&q,&m,&f,&n);
    for (int i=0;i<x;i++){
        scanf("%lf%lf%lf%lf",&qs,&ms,&fs,&ns);
        qs=qs/q*10;
        ms=ms/m*35;
        fs=fs/f*50;
        ns=ns/n*5;
        total=qs+ms+fs+ns;

        if(total<40){
            printf("%.2f F\n",total);
            cf++;
        }
        else if(total <80){
            printf("%.2f P\n",total);
            cp++;
        }
        else{
            printf("%.2f E\n",total);
            ce++;
        }
    }
    printf("%d\n%d\n%d",cf,cp,ce);

}
