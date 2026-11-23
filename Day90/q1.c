/*
Q140: Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main(void) {
    char gStr[50];
    printf("Enter gender (MALE, FEMALE, OTHER): ");
    if (scanf("%49s", gStr) != 1) return 1;

    struct Person p;
    char *val = strchr(gStr, '=');
    if (val != NULL) val++;
    else val = gStr;

    if (strcmp(val, "MALE") == 0 || strcmp(val, "Male") == 0) p.gender = MALE;
    else if (strcmp(val, "FEMALE") == 0 || strcmp(val, "Female") == 0) p.gender = FEMALE;
    else p.gender = OTHER;

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        default:
            printf("Other\n");
            break;
    }

    return 0;
}
