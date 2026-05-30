#include <stdio.h>
void main(){
    int s_hr,s_min,e_hr,e_min,hr,min;
    scanf("%d%d%d%d",&s_hr,&s_min,&e_hr,&e_min);
    hr = s_hr;
    min=s_min;
    while(hr<e_hr||hr==e_hr&&min<=e_min){
        printf("%d:%02d\n",hr,min);
        min++;
        if(min==60){
            min=0;
            hr++;
        }

    }


}
