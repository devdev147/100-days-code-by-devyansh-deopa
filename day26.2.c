#include <stdio.h>

int main() {
    int n = 3; // controls the maximum group (5 stars)
    int i, j, stars;

    for (i = 1; i <= 2 * n - 1; i++) {
        if (i <= n) {
            stars = 2 * i - 1;        // increasing part
        } else {
            stars = 2 * (2 * n - i) - 1; // decreasing part
        }

        // print stars
        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }

        // print blank line between groups (except last one)
        if (i != 2 * n - 1)
            printf("\n");
    }

    return 0;
}
