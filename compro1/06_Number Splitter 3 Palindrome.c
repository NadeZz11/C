#include <stdio.h>
void main(){
    int n,origin,reverse=0,a;
    scanf("%d",&n);
    origin=n;
    if(n<0){
        printf("Out of range");
    }
    else{
        while(n!=0){
            a=n%10;
            reverse=reverse*10+a;
            n=n/10;
        }
        if(origin==reverse){
            printf("Palindrome");
        }
        else{
            printf("Not palindrome");
        }
    }


}
