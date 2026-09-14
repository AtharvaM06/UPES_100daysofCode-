//Rotate an array to the right by k positions.

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/*
 * Rotates arr of size n to the right by k positions, in place.
 * Uses the "three reversals" trick:
 *   1. Reverse the whole array.
 *   2. Reverse the first k elements.
 *   3. Reverse the remaining n-k elements.
 * Time:  O(n)
 * Space: O(1)
 */
void rotateRight(int arr[], int n, int k) {
    if (n == 0) return;

    k = k % n;      // handle k >= n
    if (k < 0) {    // handle negative k (treat as rotate left)
        k += n;
    }
    if (k == 0) return;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array:  ");
    printArray(arr, n);

    rotateRight(arr, n, k);

    printf("Rotated right %d: ", k);
    printArray(arr, n);

    return 0;
}