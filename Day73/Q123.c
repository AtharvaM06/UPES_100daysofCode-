//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    char ch;
    int inWord = 0; // Flag to track if we are inside a word

    while ((ch = fgetc(file)) != EOF) {
        charCount++; // Count every character

        if (ch == '\n') {
            lineCount++; // Count lines
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; // We are not in a word
        } else if (!inWord) {
            inWord = 1; // We have entered a word
            wordCount++; // Count the word
        }
    }

    fclose(file);

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);

    return 0;
}