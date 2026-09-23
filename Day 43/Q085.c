//Reverse a string.

#include <stdio.h>
int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // Reverse the string
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string: %s", str);
    return 0;
}