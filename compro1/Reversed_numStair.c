#include <stdio.h>
void main(){
    int k,i=0;
    scanf("%d",&k);
    int a[600];
    while(1){
        int n;
        scanf("%d",&n);
        if(n<0){
            if(i==0){
                printf("None");
            }
            break;
        }
        else{
            a[i]=n;
            i++;
        }
    }
    int y=0;
    for(int j=i-1;j>=0;j--){
        for(int s=0;s<j;s++){
            printf(" ");
        }
        if(a[j]%k==0){
           for(int x=0;x<=y;x++){
                printf("K");
           }
        }
        else if(a[j]>9){
            a[j]=a[j]%10;
            for(int x=0;x<=y;x++){
                printf("%d",a[j]);
           }
        }
        else {
            for(int x=0;x<=y;x++){
                printf("%d",a[j]);
           }
        }

        y++;
       printf("\n");
    }
}
