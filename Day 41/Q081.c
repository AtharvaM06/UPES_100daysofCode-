//Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters without using strlen
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("The number of characters in the string is: %d", count);
    return 0;
}