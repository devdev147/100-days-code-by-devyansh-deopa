#include <stdio.h>

int main() {
    int rows, columns;
    rows = 5;    // Number of rows
    columns = 5; // Number of columns
    // Loop to print the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}