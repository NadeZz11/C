#include <stdio.h>
void main(){
    int n,limit,count=0;
    scanf("%d%d",&n,&limit);
    for(int i=0;i<n;i++){
        int age,a,salary;
        scanf("%d",&age);
        scanf("%d%d",&a,&salary);
        salary*=12;
        if(age>=18&&a!=1&&salary<=300000){
            count+=1;
        }

    }
    if(limit>=7000*count){
        printf("OK");
    }
    else{
        printf("%d",7000*count-limit);

    }


}
