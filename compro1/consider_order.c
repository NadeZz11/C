#include <stdio.h>
void main(){
    int X,Y,M,N;
    int Mx,My,Nx,Ny;
    int Rx,Ry;
    scanf("%d%d%d%d",&X,&Y,&M,&N);
    Mx=M*2;
    My=M*6;
    Nx=N*1;
    Ny=N*4;
    if(M>=0&&N>=0){
          if(X>=Mx&&Y>=My){
                Rx=X-Mx;
                Ry=Y-My;

               if(Rx>=Nx&&Ry>=Ny){
                    Rx=Rx-Nx;
                    Ry=Ry-Ny;

                    printf("Yes %d %d",Rx,Ry);
               }
               else if(Rx<Nx&&Ry<Ny){
                    if(Nx>0&&Ny>0){
                        Rx=(Rx-Nx)*-1;
                        Ry=(Ry-Ny)*-1;
                    }
                    else{
                        Rx=0;
                        Ry=0;
                    }
                    printf("No %d %d", Rx,Ry);

                }

            }

        }
    }



