#include <stdio.h>
void main(){
    int c=0;
    int a[501];
    while(1){
        int n;
        scanf("%d",&n);
        if(n<0||n>9){
            break;
        }
        a[c]=n;
        c+=1;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<c-1-i;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("%d",a[i]);
        }
        printf("\n");
    }
}
