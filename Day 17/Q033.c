//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, numDigits = 0;
    double sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    original = n;

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to the power of numDigits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, numDigits);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("\n%d is an Armstrong number.\n", original);
    else
        printf("\n%d is not an Armstrong number.\n", original);

    return 0;
}