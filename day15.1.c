#include <stdio.h>
// Program to calculate the factorial of a number using a for loop
int main() {
    int num;
    int factorial = 1; // Using int for smaller numbers

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; ++i) 
    {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}