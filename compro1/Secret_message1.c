#include <stdio.h>
int main(){
    int n;
    char c,out;
    scanf("%d %c",&n,&c);
    if(c<65||c>90){
        printf("Out of range");
    }
    else{
        if(c+n>90){
            out=64+(c+n)-90;
        }
        else{
            out=c+n;

        }
        printf("%c",out);

    }
    return 0;
}
