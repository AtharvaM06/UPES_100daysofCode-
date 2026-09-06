//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0, numerator = 2, denominator = 3;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("\nSum of the series: %.2f\n", sum);
    return 0;
}