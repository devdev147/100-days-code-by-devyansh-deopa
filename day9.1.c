// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, r1, r2, D;

    printf("Enter coefficient of x^2, x and constant term respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    D = (b * b) - (4 * a * c);
    r1 = (-b + sqrt(D)) / (2 * a);
    r2 = (-b - sqrt(D)) / (2 * a);

    if (D > 0)
        printf("The roots of equation are real and distinct and are: %d %d\n", r1, r2);
    else if (D == 0)
        printf("The roots of equation are real and equal and are: %d %d\n", r1, r2);
    else
        printf("The roots of equation are not real\n");

    return 0;
}

