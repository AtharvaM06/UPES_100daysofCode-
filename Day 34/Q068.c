//Delete an element from an array.

#include <stdio.h>
int main() {
    int n, element, i, j;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to delete: ");
    scanf("%d", &element);

    // Find the element to delete
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            break;
        }
    }

    // Check if the element was found
    if (i == n) {
        printf("\nElement not found in the array.");
        return 1;
    }

    // Shift elements to the left to overwrite the element to delete
    for (j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    printf("\nThe array after deleting %d is: ", element);
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}