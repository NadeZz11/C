#include <stdio.h>
void main() {
    int x;
    scanf("%d", &x);

    int count = 0;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (i * i == x) {
                count += 1;
            } else {
                count += 2;
            }
        }
    }

    if (count == 2) {
        printf("%d is prime\n", x);
    } else {
        printf("%d\n", count);
    }
}
