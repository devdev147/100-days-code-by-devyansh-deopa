#include <stdio.h>
// This program prints a right-angled triangle number pattern.
int main()
{
    int rows = 5;

    // This loop for traverse
    // pyramid from top to bottom
    for (int i = 0; i < rows; i++) {

        // Inner loop for printing 
        // character in each rows
        for (int j = 0; j <= i; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
    return 0;
}