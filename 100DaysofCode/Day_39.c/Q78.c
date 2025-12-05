//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if square matrix
    if (rows != cols) {
        printf("Matrix must be square to have a main diagonal.\n");
        return 0;
    }

    int sum = 0;

    // Sum of main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
