//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char c;

    printf("\nEnter a character : ");
    scanf("%c",&c);

    c= c-32;

    if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
        printf("\nEntered character is a vovel\n");
    }
    else
    {
        printf("\nEntered character is a consonant\n");
    }
    return 0;

}