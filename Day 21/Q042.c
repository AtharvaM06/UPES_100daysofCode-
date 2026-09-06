//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    // Calculate the sum of proper divisors
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == n)
        printf("\n%d is a perfect number.\n", n);
    else
        printf("\n%d is not a perfect number.\n", n);

    return 0;
}