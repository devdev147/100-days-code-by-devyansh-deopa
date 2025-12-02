//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n;
    int matrix[10][10];
    int sym = 1;  // assume symmetric

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

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                sym = 0;
                break;
            }
        }
        if (!sym)
            break;
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display result
    if (sym)
        printf(" The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;
}
