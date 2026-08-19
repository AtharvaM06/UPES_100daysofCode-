//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter value of a : ");
    scanf("%d",&a);

    printf("Enter value of b : ");
    scanf("%d",&b);

    printf("\nNumbers before swapping\n a = %d, b = %d\n",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nValues after Swapping :\n a = %d , b = %d",a,b);

    return 0;
}