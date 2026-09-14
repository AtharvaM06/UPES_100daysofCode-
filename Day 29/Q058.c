//Find the maximum and minimum element in an array.

#include <stdio.h>
int main() {
    int n, max, min;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements");
    for (int i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("\nThe maximum element in the array is: %d", max);
    printf("\nThe minimum element in the array is: %d", min);
    return 0;
}