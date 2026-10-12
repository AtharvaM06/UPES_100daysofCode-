//Remove all vowels from a string

#include <stdio.h>
int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove vowels from the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i]; // Copy non-vowel characters to result
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing vowels: %s", result);
    return 0;
}