//Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n, factorial = 1;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("\nFactorial of %d is: %d\n", n, factorial);
    return 0;
}