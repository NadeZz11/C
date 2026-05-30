#include <stdio.h>
void main(){
    int n,s_a=0,s_b=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            s_a+=2;
        }
        else if(a[i]<b[i]){
            s_b+=2;
        }
        else{
            s_a+=1;
            s_b+=1;
        }
    }
    if(s_a>s_b){
        printf("Team 1 wins\n");
        printf("Score %d to %d",s_a,s_b);
    }
    else if(s_b>s_a){
        printf("Team 2 wins\n");
        printf("Score %d to %d",s_b,s_a);
    }
    else{
        printf("Draw game\n");
        printf("Score %d to %d",s_a,s_b);
    }
}
