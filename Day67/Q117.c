//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
int main(void) {
    int m, n;
    printf("Enter size of first array: ");
    if (scanf("%d", &m) != 1 || m <= 0) {
        return 1;
    }

    int arr1[m];
    printf("Enter %d elements for first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr2[n];
    printf("Enter %d elements for second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge both arrays
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    // Print the merged array
    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}