#include <stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=12;i++){
        if(num<1||num>99){
            printf("Number is out of range");
            break;
        }
        if(num*12>999){
            printf("%d x %2d = %4d\n",num,i,num*i);
        }
        else if(num*12>99){
            printf("%d x %2d = %3d\n",num,i,num*i);
        }
        else if(num*12>9){
            printf("%d x %2d = %2d\n",num,i,num*i);
        }

    }
}
