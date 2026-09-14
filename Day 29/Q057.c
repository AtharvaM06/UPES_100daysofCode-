//Find the sum of array elements.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements");
    for (int i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nThe sum of the array elements is: %d", sum);
    return 0;
}

