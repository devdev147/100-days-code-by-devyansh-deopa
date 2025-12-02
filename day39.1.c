#include <stdio.h>

int main() {
    int n;
    int matrix[10][10];
    int distinct = 1; // assume diagonal elements are distinct

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

    // Check distinctness of diagonal elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
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
    if (distinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\n Diagonal elements are not distinct.\n");

    return 0;
}
