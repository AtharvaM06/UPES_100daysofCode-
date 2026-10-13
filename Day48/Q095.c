//Check if one string is a rotation of another.

#include <stdio.h>
int isRotation(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;

    // Calculate lengths of both strings
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // If lengths are not equal, str2 cannot be a rotation of str1
    if (len1 != len2) {
        return 0;
    }

    // Create a new string that is str1 concatenated with itself
    char concat[200];
    for (int i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        concat[len1 + i] = str1[i];
    }
    concat[2 * len1] = '\0'; // Null-terminate the concatenated string

    // Check if str2 is a substring of the concatenated string
    for (int i = 0; i <= 2 * len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (concat[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; // str2 is a rotation of str1
        }
    }

    return 0; // str2 is not a rotation of str1
}