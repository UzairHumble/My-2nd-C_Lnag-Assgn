#include <stdio.h>

int main() {
    int rows = 8;
    printf("\n\n");

    for (int i = rows; i >= 1; i--) {
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        for (int k = i; k >= 1; k--) {
            printf("%c ", k + 64);
        }
        for (int j = 0; j < 2 * (rows - i); j++) {
            printf(" ");
        }
        for (int k = i; k >= 1; k--) {
            printf("%c ", k + 64);
        }
        printf("\n\n");
    }

    return 0;
}