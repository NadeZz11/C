#include <stdio.h>
void main(){
    int strong,sub,beautiful;
    scanf("%d%d%d", &strong, &sub, &beautiful);
    if (strong<0||strong>100||sub<0||sub>100||beautiful<0||beautiful>100){
        printf("Invalid data");
    }
    else if(strong>=80&&sub>=80&&beautiful>=80){
        printf("Grade A");
    }
    else if((strong+sub+beautiful)/3>=70){
        printf("Grade B");
    }
    else if((strong+sub+beautiful)/3>=50){
        printf("Grade C");
    }
    else{
        printf("Grade F");
    }
}
