#include <stdio.h>
// Program to reverse a number using a while loop
int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10;                     // Remove the last digit
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}

