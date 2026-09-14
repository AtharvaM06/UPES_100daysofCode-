//Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, i, largest, secondLargest;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements");
    for (i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("\nArray must have at least two elements.");
        return 1;
    }

    largest = secondLargest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest) {
        printf("\nThere is no second largest element in the array.");
    } else {
        printf("\nThe second largest element in the array is: %d", secondLargest);
    }
    return 0;
}