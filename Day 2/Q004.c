//Write a program to calculate the area and circumference of a circle given its radius. 

#include <stdio.h>

int main()
{
    double R, area, cir;

    printf("Enter Radius of circle : ");
    scanf("%lf",&R);

    if (R<=0) {
        printf("\nEnter a non-zero, non-negative value\n\n");
    } else{
        area= (22.0/7.0)*R*R;
        cir= 2*(22.0/7.0)*R;

        printf("\nArea of circle : %.2lf\n",area);
        printf("Circumference of circle : %.2lf\n",cir);
    }

    return 0;
}