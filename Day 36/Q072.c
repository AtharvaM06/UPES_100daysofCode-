//Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, cols, sum = 0;
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
            sum += matrix[i][j]; // Add the element to the sum
        }
    }
    printf("\nThe sum of all elements in the matrix is: %d", sum);
    return 0;
}