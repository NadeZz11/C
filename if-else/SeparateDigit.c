#include <stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    int hundreds = x/100%10;
    int tens = x/10%10;
    int ones= x%10;

    printf("Hundreds: %d\n",hundreds);
    printf("Tens: %d\n",tens);
    printf("Ones: %d\n",ones);

}
