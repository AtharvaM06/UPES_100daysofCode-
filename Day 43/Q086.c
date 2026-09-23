//Check if a string is a palindrome.

#include <stdio.h>
int main() {
    char str[100];
    int len = 0, isPalindrome = 1; // Flag to check if the string is a palindrome

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // Check for palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; // Set flag to false if characters don't match
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}