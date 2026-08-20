//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main()
{
    int n;

    printf("\nCheck whether an integer is even or odd\n\n");
    printf("Enter an integer : ");
    scanf("%d",&n);

    if (n%2==0) {
        printf("\nGiven integer is Even\n");
    }
    else {
        printf("\nGiven integer is odd\n");
    }
    return 0;
}