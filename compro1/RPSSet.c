#include <stdio.h>
int main(){
    int n,s_a=0,s_b=0,x;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==1&&b[i]==3){
            s_a++;
        }
        else if(a[i]==3&&b[i]==1){
            s_b++;
        }
        else if(a[i]>b[i]){
            s_a++;
        }
        else if(b[i]>a[i]){
            s_b++;
        }
    }
    if(s_a>s_b){
        x=1;
    }
    else if(s_a<s_b){
        x=2;
    }
    else {
        x=0;
    }
    printf("%d %d\n%d",s_a,s_b,x);
    return 0;
}
