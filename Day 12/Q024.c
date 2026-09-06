//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>
int main() {
    int units;
    printf("\nEnter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        printf("\nThe electricity bill is: Rs. %d\n", units * 5);
    } else if (units <= 200) {
        printf("\nThe electricity bill is: Rs. %d\n", (100 * 5) + ((units - 100) * 7));
    } else if (units <= 300) {
        printf("\nThe electricity bill is: Rs. %d\n", (100 * 5) + (100 * 7) + ((units - 200) * 10));
    } else {
        printf("\nThe electricity bill is: Rs. %d\n", (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12));
    }

    return 0;
}