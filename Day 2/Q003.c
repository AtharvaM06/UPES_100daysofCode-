//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    double l,b;
    printf("Enter value of length : ");
    scanf("%lf",&l);

    printf("Enter value of Breadth : ");
    scanf("%lf",&b);

    printf("\nArea of rectangle : %.2lf\n", l*b);
    printf("\nPerimeter of rectangle : %.2lf\n",2*(l+b));

    return 0 ;

}