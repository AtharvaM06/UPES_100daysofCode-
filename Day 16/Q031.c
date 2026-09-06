//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    long long n;
    int binary[64];
    int i = 0;

    printf("\nEnter a number: ");
    scanf("%lld", &n);

    if (n == 0) {
        printf("\nBinary representation: 0\n");
        return 0;
    }

    long long num = (n < 0) ? -n : n;

    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    printf("Binary representation: ");
    if (n < 0) printf("-");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}