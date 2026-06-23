#include <stdio.h>
void main(){
    int total = 0;
    int add = 0;
    for(int i=0;i<15;i++){
        int x;
        scanf("%d",&x);
        if(x>0&&x<=100){
            total+=x;
        }
    }

    while(total >= 400 && total <= 600){
        int x;
        scanf("%d",&x);
        if(x > 0 && x <= 100) {
            total += x;
            add++;
        }else{
            add++;
            continue;
        }
    }

    printf("%d\n%d",total,add);

}

