//Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, original, remainder, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        sum += factorial(remainder);
        n /= 10;
    }

    if (sum == original)
        printf("\n%d is a strong number.\n", original);
    else
        printf("\n%d is not a strong number.\n", original);

    return 0;
}