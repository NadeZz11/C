#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a=1,b=1,c=1;
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(a<=b&&a<=c){
            printf("A\n");
            a+=t;
        }
        else if(b<a&&b<=c){
            printf("B\n");
            b+=t;
        }
        else if(c<a&&c<b){
            printf("C\n");
            c+=t;
        }

    }
}


