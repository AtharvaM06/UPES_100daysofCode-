//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];

    printf("\nEnter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);
    int valid = 1;

    // Validate that the input contains only 0s and 1s
    for (int i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("\nInvalid binary number! Please enter only 0s and 1s.\n");
        return 0;
    }

    printf("\n1's complement: ");
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}