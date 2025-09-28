#include <stdio.h>
// Write a program to print a right-angled triangle star pattern.
int main() {
    int n=5;
    // Outer loop for rows
    for (int i = n; i >= 1; i--) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
