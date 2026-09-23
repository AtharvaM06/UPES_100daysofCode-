//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() {
    int rows, cols, isDistinct = 1; // Flag to check if diagonal elements are distinct
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can only have a diagonal if it is square
    if (rows != cols) {
        printf("\nA matrix must be square to have a diagonal.\n");
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

    // Check for distinct diagonal elements
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; // Set flag to false if any diagonal elements are the same
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("\nThe diagonal elements of the matrix are distinct.\n");
    } else {
        printf("\nThe diagonal elements of the matrix are not distinct.\n");
    }

    return 0;
}