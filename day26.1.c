#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;

    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print numbers
        for (k = n - i + 1; k <= n; k++) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
