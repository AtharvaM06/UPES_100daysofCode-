//Find the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[100], longestWord[100];
    int maxLength = 0, currentLength = 0, startIndex = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string to find the longest word
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = i - currentLength;
            }
            currentLength = 0;
        }
    }

    // Check for the last word in case the string doesn't end with a space
    if (currentLength > maxLength) {
        maxLength = currentLength;
        startIndex = strlen(str) - currentLength;
    }

    // Copy the longest word to longestWord array
    for (int i = 0; i < maxLength; i++) {
        longestWord[i] = str[startIndex + i];
    }
    longestWord[maxLength] = '\0'; // Null-terminate the longest word

    printf("Longest word: %s\n", longestWord);
    return 0;
}