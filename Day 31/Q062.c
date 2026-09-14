//Reverse an array without taking extra space.

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
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("\nThe reversed array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}