//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    int cost_price, selling_price;
    printf("\n\nEnter the cost price: ");
    scanf("%d", &cost_price);
    printf("\nEnter the selling price: ");
    scanf("%d", &selling_price);

    if (selling_price > cost_price) {
        int profit = selling_price - cost_price;
        float profit_percentage = (float)profit / cost_price * 100;
        printf("\nProfit: %d\n", profit);
        printf("Profit Percentage: %.2f%%\n\n", profit_percentage);
    } else if (selling_price < cost_price) {
        int loss = cost_price - selling_price;
        float loss_percentage = (float)loss / cost_price * 100;
        printf("\nLoss: %d\n", loss);
        printf("Loss Percentage: %.2f%%\n\n", loss_percentage);
    } else {
        printf("\nNo profit, no loss.\n");
    }

    return 0;
}
