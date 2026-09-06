//Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10;       // Remove the last digit
    }

    printf("\nSum of digits is: %d\n", sum);
    return 0;
}