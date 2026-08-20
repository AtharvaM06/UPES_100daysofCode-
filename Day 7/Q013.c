//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int year;

    printf("\nCheck whether the entered year is a leap year or not\n");
    printf("Enter a year : ");
    scanf("%d",&year);

    if (year%4==0) {
        printf("\nEntered year is a leap year\n");
    }
    else
    {
        printf("\nEntered year is not a leap year\n");
    }
    return 0;
}