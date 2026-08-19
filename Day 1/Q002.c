///Q2: Write a program to input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>

int main()
{
    int a, b;

    printf("\nEnter valuee of a : ");
    scanf("%d", &a);

    printf("Enter value of b : ");
    scanf("%d",&b);

    printf("\na=%d, b=%d\n",a,b);

    printf("\nSum (a+b) = %d\n",a+b);
    printf("Difference (a-b) = %d\n",a-b);
    printf("Difference (b-a) = %d\n",b-a);
    printf("Product = %d\n", a*b);
    
    if ((a==0) || (b==0)) {
        printf("\nEnter a non-zero value for Division\n");
    } else
    {
        printf("\nQuotient (a/b) = %.2f\n",(float)a/b);
        printf("Quotient (b/a) =%.2f\n",(float)b/a);
    }
    return 0;

}