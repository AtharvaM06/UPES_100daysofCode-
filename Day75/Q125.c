//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
int main() {
    FILE *file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char newLine[200];
    printf("Enter a new line of text to append: ");
    getchar(); // Consume the newline character left by previous input
    fgets(newLine, sizeof(newLine), stdin);

    fprintf(file, "%s", newLine);

    fclose(file);
    printf("Text appended successfully to info.txt\n");

    return 0;
}