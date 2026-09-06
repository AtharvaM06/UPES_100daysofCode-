//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>
int main() {
    int late_days;
    printf("\nEnter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 5) {
        printf("\nThe fine is: Rs. %d\n", late_days * 2);
    } else if (late_days <= 10) {
        printf("\nThe fine is: Rs. %d\n", (5 * 2) + ((late_days - 5) * 4));
    } else if (late_days <= 30) {
        printf("\nThe fine is: Rs. %d\n", (5 * 2) + (5 * 4) + ((late_days - 10) * 6));
    } else {
        printf("\nMembership Cancelled.\n");
    }

    return 0;
}
