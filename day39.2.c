#include <stdio.h>

int main() {
    int n;
    int matrix[10][10];
    int sum = 0;

    // Input: size of square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input: matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display sum of main diagonal
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
