#include <stdio.h>

int main() {
    int decimal;
    int bit[256];
    int i = 0;     

    for (int j = 0; j < 256; j++) {
        bit[j] = 0;
    }

    printf("10i®”„");
    scanf("%d", &decimal);

    while (decimal > 0) {
        bit[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("2i”: ");
    while (i > 0) {
        i--;
        printf("%d", bit[i]); 
    }
    printf("\n");

    return 0;
}
