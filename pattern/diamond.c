#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half of diamond
    for (i = 0; i < n; i++) {

        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of diamond
    for (i = n - 2; i >= 0; i--) {

        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
