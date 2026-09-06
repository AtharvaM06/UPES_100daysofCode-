//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("\nEnter the number of odd numbers to sum: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    printf("\nSum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}