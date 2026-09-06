//Write a program to print all factors of a given number.

#include <stdio.h>
int main() {
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\nFactors of %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}