#include <stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        int f=0;
        for(int j=0;j<5;j++){
            int a,b;
            scanf("%d%d",&a,&b);
            if(a==1&&b==0){
                f+=1;
            }
        }
        if(f>=3){
            printf("Case#%d was guilty\n",i);
        }
        else{
            printf("Case#%d was not guilty\n",i);

        }


    }
}
