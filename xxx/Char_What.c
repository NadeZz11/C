#include <stdio.h>
void main(){
    char x;
    scanf("%c",&x);
    if((x >=65 && x <= 90) || (x >= 97 && x <= 122)){
        printf("Alphabetic");
    }else if(x >= 48 && x <= 57){
        printf("Number");
    }else{
        printf("Special");
    }

}
