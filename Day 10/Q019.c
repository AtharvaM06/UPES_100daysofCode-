//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("\nEnter the lengths of the three sides of the triangle\n\n");
    printf("Side 1: ");
    scanf("%lf", &side1);
    printf("Side 2: ");
    scanf("%lf", &side2);
    printf("Side 3: ");
    scanf("%lf", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("\nThe triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("\nThe triangle is Isosceles.\n");
    } else {
        printf("\nThe triangle is Scalene.\n");
    }

    return 0;
}