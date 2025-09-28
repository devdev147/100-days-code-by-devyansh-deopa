#include <stdio.h>

int main() {
    int n, i, j, p;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {  // check numbers from 2 to n
        p = 1;  // assume i is prime

        for (j = 2; j * j <= i; j++) {  // check divisors
            if (i % j == 0) {
                p = 0; // i is not prime
                break;
            }
        }

        if (p)
            printf("%d ", i);
    }

    return 0;
}
