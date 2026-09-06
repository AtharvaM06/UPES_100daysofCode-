//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() {
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    printf("\nPrime numbers from 1 to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}