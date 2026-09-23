//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int rows, cols;
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal traversal of the matrix is:\n");
    // Traverse diagonally
    for (int d = 0; d < rows + cols - 1; d++) {
        for (int i = 0; i <= d; i++) {
            int j = d - i;
            if (i < rows && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}