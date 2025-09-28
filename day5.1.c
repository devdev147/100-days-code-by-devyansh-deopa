#include <stdio.h>
//Write a program to calculate the simple and compound interest given principal, rate, and time.
int main() {
    int principal, rate, time;
    float simple_interest, compound_interest, amount;
    int i;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%d", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%d", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100.0f;

    // Calculate Compound Interest
    amount = principal;
    for (i = 0; i < time; i++) {
        amount = amount + (amount * rate / 100.0f);
    }
    compound_interest = amount - principal;

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}