//Write a program to find the LCM of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, lcm;

    printf("\nEnter two numbers");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find the greater of the two numbers
    int max = (num1 > num2) ? num1 : num2;

    // Calculate LCM
    lcm = max;
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm++;
    }

    printf("\nLCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}