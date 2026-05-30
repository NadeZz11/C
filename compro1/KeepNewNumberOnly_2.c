#include <stdio.h>
int main(){
    int a[1000000];
    int num=0,c=0,f,x;
    while(1){
        f=0;
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        num++;
        for(int i=0;i<c;i++){
            if(a[i]==x){
               f++;
                break;
            }
        }
        if(f==0){
            a[c]==x;
            c++;
        }

    }
    printf("%d\n%d\n",num,c);
    for(int i=0;i<c;i++){
        printf("%d ",a[i]);
    }
}
