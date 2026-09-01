//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("\nQuadratic Equation: ax^2 + bx + c = 0\n");    
    printf("Enter coefficients a : ");
    scanf("%lf", &a);
    printf("Enter coefficient b : ");
    scanf("%lf", &b);
    printf("Enter coefficient c : ");
    scanf("%lf", &c);

    printf("\nThe quadratic equation is: %.1lfx^2 + %.1lfx + %.1lf = 0\n", a, b, c);
    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nThe roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("\nThe roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        printf("\nThe roots are complex and different.\n");
    }
    
    return 0;
}
