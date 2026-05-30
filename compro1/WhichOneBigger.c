#include <stdio.h>
int main(){
    int n,num,more=0,less=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(a[i]>num){
            more+=a[i];
        }
        else if(a[i]<num){
            less+=a[i];
        }
    }
    if(more>less){
        printf("%d",more);
    }
    else if(less>more){
        printf("%d",less);
    }
    else{
        printf("%d",less);
    }
    return 0;
}
