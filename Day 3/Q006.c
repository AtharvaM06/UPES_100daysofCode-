// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value of a : ");
    scanf("%d",&a);

    printf("Enter value of b : ");
    scanf("%d",&b);

    printf("\nNumbers before swapping\n a= %d, b=%d\n",a,b);

    c=a;
    a=b;
    b=c;
    printf("\nValues after Swapping :\n a=%d , b=%d",a,b);

}