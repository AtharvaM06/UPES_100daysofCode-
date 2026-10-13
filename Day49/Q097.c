//Print the initials of a name.

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

    // Print the first character of the name
    printf("Initial: %c\n", name[0]);

    return 0;
}