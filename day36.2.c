#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];  // limit: 10x10
    int sum = 0;

    // Taking input for matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // add to sum while reading
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}