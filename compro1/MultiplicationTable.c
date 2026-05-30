#include <stdio.h>
int main(){
    int s_x,s_y,e_x,e_y;
    scanf("%d%d%d%d",&s_x,&s_y,&e_x,&e_y);
    for(int i=s_x;i<=e_x;i++){
        if(i==s_x){
            for(int j=s_y;j<=e_y;j++){
                printf("%d x %d = %d\n",i,j,i*j);
            }
        }
        else if(i<e_x){
            for(int j=1;j<=e_y;j++){
                printf("%d x %d = %d\n",i,j,i*j);
            }
        }
        else{
            for(int j=1;j<=s_y;j++){
                printf("%d x %d = %d\n",i,j,i*j);
            }
        }


    }

    return 0;

}

