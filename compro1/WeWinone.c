#include <stdio.h>
void main(){
    int count=0;
    while(1){
        int age,a,salary;
        scanf("%d",&age);
        if(age==-1){
            break;
        }
        scanf("%d%d",&a,&salary);
        salary*=12;
        if(age>=18&&a!=1&&salary<=300000){
            printf("Approve");
            count+=1;
        }
        else{
            printf("Reject");
        }
        printf("\n");
    }
    printf("%d",7000*count);

}
