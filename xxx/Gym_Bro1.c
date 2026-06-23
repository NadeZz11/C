#include <stdio.h>
void main(){
    int day;
    scanf("%d",&day);
    if(day==1){
        printf("GYM CLOSED");
    }else if(day==2||day==5){
        printf("Pull Day");
    }else if(day==3||day==6){
        printf("Push Day");
    }else if(day==4){
        printf("Leg Day\nI can’t do this anymore!");
    }else if(day==7){
        printf("Cheat Day\nNYAM NYAM");
    }else{
        printf("Invalid Value");
    }
}
