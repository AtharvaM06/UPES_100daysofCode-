//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_ending_here = arr[0];
    int max_so_far = arr[0];

    for (int i = 1; i < n; i++) {
        /* extend the previous subarray or start fresh at arr[i] */
        max_ending_here = (arr[i] > max_ending_here + arr[i])
                              ? arr[i]
                              : max_ending_here + arr[i];

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }

    printf("Final output: %d\n", max_so_far);
    return 0;
}