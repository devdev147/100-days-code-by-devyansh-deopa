#include <stdio.h>
// Program to calculate profit or loss percentage based on cost price and selling price
int main() {
    float cp, sp, profit_loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &cp);

    profit_loss = sp - cp;

    if (profit_loss > 0) {
        percentage = (profit_loss / cp) * 100;
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profit_loss < 0) {
        percentage = (-profit_loss / cp) * 100;
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}