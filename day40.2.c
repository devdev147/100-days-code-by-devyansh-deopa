#include <stdio.h>

int main() {
    int A[3][2], B[2][4], product[3][4];

    // Input: First matrix (3x2)
    printf("Enter elements of first matrix (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input: Second matrix (2x4)
    printf("Enter elements of second matrix (2x4):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize product matrix to 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("\nProduct of the matrices (3x4):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
