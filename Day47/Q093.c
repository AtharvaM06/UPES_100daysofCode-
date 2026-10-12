//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int isAnagram = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character in both strings
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
    }

    // Check if frequencies match
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams of each other.\n");
    } else {
        printf("The strings are not anagrams of each other.\n");
    }

    return 0;
}