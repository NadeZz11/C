#include <stdio.h>
void main(){
    int X,Y,M,N;
    scanf("%d%d%d%d",&X,&Y,&M,&N);
    int Mx=M*2,My=M*6,Nx=N*1,Ny=N*4;
    int Rx,Ry;
    if(M>=0&&N>=0){
        Rx=X-Mx;
        Ry=Y-My;

        if(Rx>=Nx&&Ry>=Ny){
            Rx=Rx-Nx;
            Ry=Ry-Ny;
            printf("Yes %d %d",Rx,Ry);
        }
        else if (M>0&&N>0){
            if(Rx<=Nx){
                Rx=Rx-Nx;
            }else{
                Rx=0;
            }
            if(Ry<=Ny){
                Ry=Ry-Ny;
            }else{
                Ry=0;
            }
            printf("No %d %d",Rx*-1,Ry*-1);
        }
        else{
                if(Rx>0){
                    Rx=0;
                }else{
                    Rx=Rx*-1;
                }
                if(Ry>0){
                    Ry=0;
                }else{
                    Ry=Ry*-1;
                }

            printf("No %d %d",Rx,Ry);
        }
    }
}

