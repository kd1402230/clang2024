#include <stdio.h>

int main() {
    int a, b, i, j;

    printf("   |");
    for (a = 1; a < 10; a++) {
        printf("%3d", a);
    }
    printf("\n");

    for (b = 1; b < 32; b++) {
        printf("-");
    }
    printf("\n");

    for (i = 1; i < 10; i++) {
        printf("%3d|", i);
        for (j = 1; j < 10; j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }
    return 0;

}