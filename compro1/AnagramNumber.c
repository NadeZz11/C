#include <stdio.h>
int main(){
    int a[100],b[100];
    int n=100,c_a=0,c_b=0,ans;
    for(int i=0;i<n;i++){
        a[i]=0;
        b[i]=0;
    }
    while(1){
        int x;
        scanf("%d",&x);
        if(x<0){
            break;
        }
        a[x]=1;
    }
    while(1){
        int x;
        scanf("%d",&x);
         if(x<0){
            break;
        }
        b[x]=1;
    }
    for(int i=0;i<100;i++){
        if(a[i]==1){
            c_a+=1;
        }
        if(b[i]==1){
            c_b+=1;
        }
    }
    for(int i=0;i<100;i++){
        if(a[i]==b[i]){
            ans=1;
        }
        else{
            ans=0;
            break;
        }
    }
    if(ans==1){
        printf("A and B are anagrams\n");
    }
    else if(ans==0){
        printf("A and B are not anagrams\n");
    }
    printf("A %d\nB %d",c_a,c_b);
    return 0;
}
