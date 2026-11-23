//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int result = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        result ^= arr[i];

        if (i < n - 1)
            result ^= (i + 1);
    }

    printf("Repeated element: %d\n", result);

    return 0;
}