#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows (half of diamond): ");
    scanf("%d", &n);

    // 1. Upper Half of the Diamond (including the middle row)
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    // 2. Lower Half of the Diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
