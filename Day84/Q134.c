/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void) {
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    if (scanf("%19s", input) != 1) return 1;

    enum Status s;
    if (strcmp(input, "SUCCESS") == 0) s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) s = TIMEOUT;
    else {
        printf("Invalid status\n");
        return 1;
    }

    switch (s) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
