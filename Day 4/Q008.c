//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    int n, i=0;

    while (i==0) {
        printf("Enter value of n : ");
        scanf("%d",&n);

        if (n<=0) {
            printf("\nEnter a natural number\n");
        }
        else {
            printf("\nSum of n natural numbers is given by formula n(n+1)/2\n");
            printf("sum of given n natural numbers : %d",n*(n+1)/2);
            i=1;
        }
    }

    return 0;
}