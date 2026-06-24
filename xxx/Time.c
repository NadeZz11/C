#include <stdio.h>
void main(){
    int time,hr,min,err = 0;
    scanf("%d",&time);
    min = time%100;
    hr = time/100;
    if(time < 0){
        printf("Can not be negative.");
        err = 1;
    }
    if(hr > 23){
        printf("Hour error.\n");
        err = 1;
    }
    if(min > 59){
        printf("Minutes error.");
        err = 1;
    }
    if(err == 0){
        if(time >= 1900 && time <= 2359 || time >= 0 && time <= 459){
            printf("Night");
        }
        else if(time <=1000){
            printf("Morning");
        }else if(time <= 1500){
            printf("Noon");
        }else if(time <= 1859){
            printf("Evening");
        }

    }
}
