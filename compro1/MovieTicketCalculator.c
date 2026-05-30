#include <stdio.h>
void main(){
    int age,day;
    float total;
    scanf("%d%d", &age,&day);
    if(age>=0&&age<=12){
        total = 100;
    }
    else if (age<=17){
        total = 150;
    }
    else if (age<=59){
        total= 200;
    }
    else{
        total=120;
    }

    if(day==2){
        printf("%.2f",total-20);
    }
    else{
        printf("%.2f", total);
    }

}
