//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() 
{
    int a,b,sum;
    printf("Enter value of a : ");
    scanf("%d", &a);

    printf("Enter value of b : ");
    scanf("%d", &b);

    printf("\n a=%d, b=%d", a,b);

    sum = a+b;
    printf("\nsum of two numbers = %d",sum);

    return 0;
}