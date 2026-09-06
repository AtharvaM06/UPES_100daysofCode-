//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int n, product = 1, hasOddDigit = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply to product
            hasOddDigit = 1; // Mark that we have found an odd digit
        }
        n /= 10; // Remove the last digit
    }

    if (hasOddDigit)
        printf("\nProduct of odd digits is: %d\n", product);
    else
        printf("\nNo odd digits found in the number.\n");

    return 0;
}