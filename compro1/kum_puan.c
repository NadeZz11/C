#include <stdio.h>
void main(){
    char a[101];
    char b[101];
    char x;
    scanf("%s %s",&a,&b);
    x=a[0];
    a[0]=b[0];
    b[0]=x;
    printf("%s %s",b,a);
}
