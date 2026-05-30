#include <stdio.h>
#include <string.h>

int main() {
    char pass[10] = "0809";
    char typName[10] = "Typhoon";
    char nadeName[10] = "Nade";

    char name[10];
    char girlfriend[10];
    char date[10];

    printf("What is your name? ");
    scanf("%s", name);

    if (strcmp(name, typName) == 0) {
        printf("What is your girlfriend's name? ");
        scanf("%s", girlfriend);

        if (strcmp(girlfriend, nadeName) == 0) {
            printf("What date is the anniversary? ");
            scanf("%s", date);

            if (strcmp(date, pass) == 0) {
                printf("!!RAK FAN NA KA!!\n");
            } else {
                printf("Wrong date!\n");
            }
        } else {
            printf("Wrong girlfriend name!\n");
        }
    } else {
        printf("Wrong name!\n");
    }

    return 0;
}
