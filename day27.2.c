#include <stdio.h>

int main() {
    int n = 4; // middle row
    int i, j, stars, spaces;

    for (i = 1; i <= 2 * n - 1; i++) {
        if (i <= n) {
            // upper half (including middle)
            stars = 2 * i - 1;
            spaces = n - i;
        } else {
            // lower half
            stars = 2 * (2 * n - i) - 1;
            spaces = i - n;
        }

        // print spaces
        for (j = 1; j <= spaces; j++)
            printf(" ");

        // print stars
        for (j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
