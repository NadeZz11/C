#include <stdio.h>
void main(){
    int n,k,k1=0,k2=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        int g,s1,s2;
        scanf("%d%d%d",&g,&s1,&s2);
        if (g==1){
            if(k1<k&&s1>=9){
                printf("%d 1\n",i);
                k1++;
            }
            else if(k2 < k&&s2>=9){
                printf("%d 2\n",i);
                k2++;
            }

        }
        else if(g==2){
            if(k2<k&&s2>=9){
                printf("%d 2\n",i);
                k2++;
            }
            else if(k1 < k&&s1>=9){
                printf("%d 1\n",i);
                k1++;
            }

        }
    }

}
