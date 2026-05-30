#include <stdio.h>
int main(){
    int n,s_a=0,s_b=0,c_a=0,c_b=0;
    scanf("%d",&n);

    if(n<0){
        printf("None");
    }
    else{
        int a[n],b[n];
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            if(s_a<=s_b){
                a[c_a]=x;
                s_a+=x;
                c_a++;
            }
            else{
                b[c_b]=x;
                s_b+=x;
                c_b++;
            }
        }
        printf("%d : ",s_a);
        for(int i=0;i<c_a;i++){
            printf("%d ",a[i]);
        }
        printf("\n%d : ",s_b);
        for(int i=0;i<c_b;i++){
            printf("%d ",b[i]);
        }

    }
    return 0;
}
