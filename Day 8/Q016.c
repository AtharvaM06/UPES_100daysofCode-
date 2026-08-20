//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("\nEnter three numbers and check largest among them\n");
    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    printf("c = ");
    scanf("%d",&c);

    if ((a>b) && (a>c)) {
        printf("Largest number is : %d",a);
    }
    else if (b>a && b>c) {
        printf("Largest number is : %d",b);
    }
    else if (c>a && c>b) 
    {
        printf("Largest number is : %d",c);
    }
    return 0;
    
}