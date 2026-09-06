//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, original;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    original = n;
    int num = (n < 0) ? -n : n;   // work with absolute value

    // Special case: single-digit numbers stay the same
    if (num < 10) {
        printf("\nSwapped number: %d\n", original);
        return 0;
    }

    // Count number of digits
    int numDigits = 0;
    int temp = num;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    int placeValue = (int)pow(10, numDigits - 1);

    int firstDigit = num / placeValue;
    int lastDigit = num % 10;
    int middle = (num % placeValue) / 10;   // digits between first and last

    int swapped = lastDigit * placeValue + middle * 10 + firstDigit;

    if (original < 0)
        swapped = -swapped;

    printf("\nOriginal number: %d\n", original);
    printf("\nSwapped number: %d\n", swapped);

    return 0;
}