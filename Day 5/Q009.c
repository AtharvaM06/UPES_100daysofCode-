//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, t, si, ci, i=0;

    while (i==0) {
        printf("\nEnter values of principal, rate, and time\n\n");

        printf("Principal : ");
        scanf("%lf",&p);

        printf("Rate : ");
        scanf("%lf",&r);

        printf("Time : ");
        scanf("%lf",&t);

        if ((p<=0) || (r<=0) || (t<=0)) {
            printf("\nEnter Correct values\n\n");
        }
        else {
            si = (p*r*t)/100;
            ci = p* pow((1+(r/100)),t) -p ;

            printf("\nCalculated Simple Interest = %.2lf\n",si);
            printf("Final Amount = %.2lf\n\n", p+si);

            printf("Calculated Compound interest = %.2lf\n", ci);
            printf("Final Amount = %.2lf\n\n", p+ci);

            i=1;
        }

    }
}