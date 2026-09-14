//Merge two arrays.

#include <stdio.h>
int main() {
    int n, m;
    printf("\nEnter the number of elements in the first array: ");
    scanf("%d", &n);
    printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &m);
    int arr1[n], arr2[m], merged[n + m];
    printf("\nEnter the elements of the first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the elements of the second array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        merged[k++] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        merged[k++] = arr2[i];
    }
    printf("\nThe merged array is: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}