#include <stdio.h>
void main(){
    int i=0;
    int M=-99999999;
    int N=9999999;
    while(i<8){
        int x;
        scanf("%d", &x);
        if(x>0){
            if(x>M){
                M=x;
            }
            if(x<N){
                N=x;
            }

        }
        i++;
    }
    printf("%d\n%d", M,N);

}
