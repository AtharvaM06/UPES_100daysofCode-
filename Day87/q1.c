/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main(void) {
    char roleStr[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%19s", roleStr) != 1) return 1;

    enum Role r;
    if (strcmp(roleStr, "ADMIN") == 0) r = ADMIN;
    else if (strcmp(roleStr, "USER") == 0) r = USER;
    else if (strcmp(roleStr, "GUEST") == 0) r = GUEST;
    else {
        printf("Invalid role\n");
        return 1;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
