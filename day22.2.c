#include <stdio.h>
// Write a program to find the sum of the series 1/2 + 3/4 + 5/6 + ... up to n terms.
int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;  // Odd numbers: 1, 3, 5, 7, ...
        float denominator = 2 * i;    // Even numbers: 2, 4, 6, 8, ...
        sum += numerator / denominator;
    }

    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0;
}
