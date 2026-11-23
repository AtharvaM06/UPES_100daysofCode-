//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
int main() {
    char sourceFile[100], destFile[100];
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    FILE *source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);
    printf("Content copied from %s to %s successfully.\n", sourceFile, destFile);

    return 0;
}