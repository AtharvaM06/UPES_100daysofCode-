/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fin);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Converted successfully to output.txt\n");
    return 0;
}
