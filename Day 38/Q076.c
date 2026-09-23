//Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int rows, cols, isSymmetric = 1; // Flag to check if the matrix is symmetric
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can only be symmetric if it is square
    if (rows != cols) {
        printf("\nA matrix must be square to be symmetric.\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Set flag to false if any element doesn't match
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}