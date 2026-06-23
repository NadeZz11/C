#include <stdio.h>
void main(){
    float Balance = 9872.50;
    int password = 785241,incorrectPin = 3,pass = 0;
    while(1){
        int userPW;
        scanf("%d",&userPW);
        if(userPW == password){
            pass = 1;
            break;
        }else{
            printf("Incorrect PIN. ");
            incorrectPin--;
            if(incorrectPin == 2){
                printf("You have 2 attempts left.\n");
            }
            if(incorrectPin == 1){
                printf("You have 1 attempt left.\n");
            }
            if(incorrectPin == 0){
                printf("Your debit card is currently unavailable.\n");
                printf("The transaction has been cancelled.");
                break;
            }
        }
    }
    if(pass){
        printf("============ MENU ============\n");
        printf("     [A] Withdrawal menu\n");
        printf("     [B] Deposit menu\n");
        printf("==============================\n");
        char menu;
        scanf(" %c",&menu);
        if(menu == 'A'){
            printf("[ Withdrawal menu ]\n");
            int W;
            scanf("%d",&W);
            if(W > Balance){
                printf("Not enough money!\n");
                printf("The transaction has been cancelled.");
            }
            else if(W%100 != 0|| W <= 0){
                printf("The amount is incorrect.\n");
                printf("The transaction has been cancelled.");
            }else{
                Balance-=W;
                printf("Withdrawal successful.\n");
                printf("Balance : %.2f Baht.",Balance);
            }
        }else if(menu == 'B'){
            printf("[ Deposit menu ]\n");
            int D;
            scanf("%d",&D);
            if(D > 100000){
                printf("Deposit limit exceeded!\n");
                printf("The transaction has been cancelled.");
            }else if(D%100 != 0|| D <= 0){
                printf("The deposit amount is incorrect.\n");
                printf("The transaction has been cancelled.");
            }else{
                Balance+=D;
                printf("Deposit successful.\n");
                printf("Balance : %.2f Baht",Balance);
            }
        }else{
            printf("We don’t have this menu.");
        }
    }
}
