//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int n;

    printf("\nCheck whether input is positive, negative or zero\n");
    printf("Enter an integer : ");
    scanf("%d",&n);

    if (n>0) {
        printf("\nGiven integer is positive\n");
    }
    else if (n<0)
    {
        printf("\nGiven integer is negative\n");
    }
    else
    {
        printf("\nEntered number is Zero\n");
    }
    return 0;
    
}