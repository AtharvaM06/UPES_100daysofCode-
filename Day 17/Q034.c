//Write a program to check if a number is prime.

#include <stdio.h>
int main() {
    int n, isPrime = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("\n%d is a prime number.\n", n);
    else
        printf("\n%d is not a prime number.\n", n);

    return 0;
}