//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character if present
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Find the last space in the name
    int lastNameStart = -1;
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastNameStart = i + 1;
        }
    }

    // Print the initials and the full surname
    if (lastNameStart != -1) {
        printf("Initials: %c.", name[0]);
        for (int i = lastNameStart; i < len; i++) {
            printf("%c", name[i]);
        }
        printf("\n");
    } else {
        printf("Initial: %c\n", name[0]);
    }

    return 0;
}