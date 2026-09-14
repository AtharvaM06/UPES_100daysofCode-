//Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int n, searchElement, found = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements");
    for (int i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &searchElement);
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("\nThe element %d is found in the array.", searchElement);
    } else {
        printf("\nThe element %d is not found in the array.", searchElement);
    }
    return 0;
}