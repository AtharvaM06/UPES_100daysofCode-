/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>
#include <string.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main(void) {
    char op[20];
    int a, b;
    printf("Enter choice (ADD, SUBTRACT, MULTIPLY) and two numbers: ");
    if (scanf("%19s %d %d", op, &a, &b) != 3) return 1;

    enum Menu choice = 0;
    if (strcmp(op, "ADD") == 0) choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0) choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}
