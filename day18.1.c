#include <stdio.h>
// Program to find all factors of a given number
int main() {
    int num, i;

    // Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop to find and print all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
