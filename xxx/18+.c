#include <stdio.h>
void main(){
    int m,y;
    scanf("%d%d",&m,&y);
    if(2024-y > 18){
        printf("Welcome");
    }
    else if(2024 - y == 18){
        if(m <= 6){
            printf("Welcome");
        }else{
            printf("Get Out!");
        }
    }
    else{
        printf("Get Out!");
    }
}
