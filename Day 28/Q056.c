//Read and print elements of a one-dimensional array.

#include <stdio.h>
int main() {
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements");
    for (int i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}