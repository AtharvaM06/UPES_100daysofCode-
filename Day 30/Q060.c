//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() {
    int n, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements");
    for (int i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    printf("\nThe number of positive elements in the array is: %d", positiveCount);
    printf("\nThe number of negative elements in the array is: %d", negativeCount);
    printf("\nThe number of zero elements in the array is: %d", zeroCount);
    return 0;
}