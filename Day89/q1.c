/*
Q139: Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Result {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
