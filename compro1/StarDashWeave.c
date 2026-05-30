
// Problem: StarDashWeave
#include <stdio.h>

void main(){
    int row, col;

    scanf("%d%d", &row, &col);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i % 2 == 0)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
}
