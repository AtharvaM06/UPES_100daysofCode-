//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main() {
    int rows, cols, sum = 0;
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can only have a main diagonal if it is square
    if (rows != cols) {
        printf("\nA matrix must be square to have a main diagonal.\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            if (i == j) { // Check if the element is on the main diagonal
                sum += matrix[i][j]; // Add the element to the sum
            }
        }
    }

    printf("\nThe sum of the main diagonal elements in the matrix is: %d", sum);
    return 0;
}