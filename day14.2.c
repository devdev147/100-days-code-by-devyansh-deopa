#include <stdio.h>
// Program to calculate the product of even numbers from 1 to n using a for loop
int main() {
    int n, product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range.\n");
    } else {
        for (int i = 2; i <= n; i += 2) {  // Start from 2, increment by 2
            product *= i;
        }
        printf("The product of even numbers from 1 to %d is: %d\n", n, product);
    }

    return 0;
}