#include <stdio.h>
void main(){
    int Balance,WD;
    scanf("%d%d",&Balance,&WD);
    if(Balance < WD){
        printf("Unable to withdraw money.");
    }else{
        printf("%d",Balance-WD);
    }
}
