//Find the transpose of a matrix.

#include <stdio.h>
int main() {
    int rows, cols;
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    int transpose[cols][rows]; // Array to store the transpose of the matrix

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; // Store the element in the transpose position
        }
    }

    printf("\nThe transpose of the matrix is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}