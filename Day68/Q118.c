//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i]; // Sum of elements in the array
    }

    return totalSum - arraySum; // The missing number
}

int main(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n - 1];
    printf("Enter %d elements: ", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}