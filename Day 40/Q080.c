//Multiply two matrices.

#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2;
    printf("\nEnter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("\nEnter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    printf("\nEnter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("\nEnter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("\nMatrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

    printf("\nEnter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product matrix
    printf("\nThe product of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}