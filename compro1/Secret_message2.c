#include <stdio.h>
int main(){
    int passw,n,c=0;
    scanf("%d%d",&passw,&n);
    for(int i=0;i<n;i++){
        char x;
        scanf(" %c",&x);
        int sum=0,z=0;
        if(x>=65&&x<=90){
            if(x+passw>90){
                sum=(passw+x)-90;
                z=sum+64;
            }
            else{
                z+=passw+x;
            }
            printf("%c\n",z);
            passw+=1;
            if(passw>9){
                passw=0;
            }
            c=1;

        }
    }
    if(c==0){
        printf("None");
    }

    return 0;
}
