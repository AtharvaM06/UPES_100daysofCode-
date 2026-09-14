//Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int n, element, position;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1]; // Create an array with one extra space for the new element
    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("\nEnter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > n) {
        printf("\nInvalid position! Please enter a position between 0 and %d.", n);
        return 1; // Exit with an error code
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    printf("\nThe array after inserting %d at position %d is: ", element, position);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}