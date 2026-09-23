//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    int rows, cols;
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    int rowSums[rows]; // Array to store the sum of each row

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize the sum for the current row
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Add the element to the current row's sum
        }
    }

    printf("\nThe sum of each row in the matrix is:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}