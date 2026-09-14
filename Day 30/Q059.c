//Count even and odd numbers in an array.

#include <stdio.h>
int main() {
    int n, evenCount = 0, oddCount = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements");
    for (int i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("\nThe number of even elements in the array is: %d", evenCount);
    printf("\nThe number of odd elements in the array is: %d", oddCount);
    return 0;
}