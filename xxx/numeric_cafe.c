#include <stdio.h>
void main(){
    int total = 0;
    while(1){
        int D,A;
        scanf("%d%d",&D,&A);
        if(D < 1 || D > 5 || A < 0){
            break;
        }else{
            if(A == 0){
                printf("Cancel Order :(\n");
            }else if(D == 1){
                printf("MatchaLatte\n%d\n",A*65);
                total+=(A*65);
            }else if(D == 2){
                printf("Cappuccino\n%d\n",A*60);
                total+=(A*60);
            }else if(D == 3){
                printf("Mocha\n%d\n",A*55);
                total+=(A*55);
            }else if(D == 4){
                printf("PureMatcha\n%d\n",A*50);
                total+=(A*50);
            }else if(D == 5){
                printf("BlackCoffee\n%d\n",A*45);
                total+=(A*45);
            }
        }
    }
    printf("Total : %d",total);
}
