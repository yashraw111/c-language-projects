#include <stdio.h>

int main() {
    int i, j, space;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        space = (5 - i) * 2;
        for (j = 1; j <= space; j++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
