#include <stdio.h>
void main(){
    int n,avg=0,count=0;
    scanf("%d",&n);
    int x;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        if(x>0){
            avg+=x;
            count++;
        }
    }
    if(x<=0){
        printf("Not positive\n%.4f",(float)avg/count);
    }
    else{
        printf("%.4f",(float)avg/count);
    }

}
