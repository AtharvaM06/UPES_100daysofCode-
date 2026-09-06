//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, hcf;

    printf("\nEnter two numbers");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find the smaller of the two numbers
    int min = (num1 < num2) ? num1 : num2;

    // Calculate HCF
    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("\nHCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}