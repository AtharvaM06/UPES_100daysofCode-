//Count frequency of a given character in a string.

#include <stdio.h>
int main() {
    char str[100], ch;
    int frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count its frequency: ");
    scanf("%c", &ch);

    // Count frequency of the given character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            frequency++;
        }
    }

    printf("The character '%c' appears %d times in the string.\n", ch, frequency);
    return 0;
}