#include <stdio.h>
void main(){
    float un=0,nor=0,over=0,ob=0;
    int n,C_un=0,C_nor=0,C_over=0,C_ob=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        float w,h,f;
        scanf("%f%f",&w,&h);
        h=(h/100)*(h/100);
        f=w/h;
        if(f<18.5){
            C_un++;
            un+=w;
        }
        else if(f<25.0){
            C_nor++;
            nor+=w;
        }
        else if(f<30.0){
            C_over++;
            over+=w;
        }
        else {
            C_ob++;
            ob+=w;
        }

    }


    printf("Underweight %d %.2f %.2f%%\n",C_un,un/C_un,(float)C_un/n*100);
    printf("Normal weight %d %.2f %.2f%%\n",C_nor,nor/C_nor,(float)C_nor/n*100);
    printf("Overweight %d %.2f %.2f%%\n",C_over,over/C_over,(float)C_over/n*100);
    printf("Obesity %d %.2f %.2f%%\n",C_ob,ob/C_ob,(float)C_ob/n*100);

}
