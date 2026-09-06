//Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

#include <stdio.h>

int main() {
    printf("\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}