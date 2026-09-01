//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main() {
    int month;
    printf("\nEnter a month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("\nJanuary has 31 days.\n");
            break;
        case 2:
            printf("\nFebruary has 28 or 29 days.\n");
            break;
        case 3:
            printf("\nMarch has 31 days.\n");
            break;
        case 4:
            printf("\nApril has 30 days.\n");
            break;
        case 5:
            printf("\nMay has 31 days.\n");
            break;
        case 6:
            printf("\nJune has 30 days.\n");
            break;
        case 7:
            printf("\nJuly has 31 days.\n");
            break;
        case 8:
            printf("\nAugust has 31 days.\n");
            break;
        case 9:
            printf("\nSeptember has 30 days.\n");
            break;
        case 10:
            printf("\nOctober has 31 days.\n");
            break;
        case 11:
            printf("\nNovember has 30 days.\n");
            break;
        case 12:
            printf("\nDecember has 31 days.\n");
            break;
        default:
            printf("\nInvalid input! Please enter a number between 1 and 12.\n");
    }

    return 0;
}