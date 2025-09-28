#include<stdio.h>
//Write a program to swap the first and last digit of a number.
int main() {
    int num, fd, ld, numDigits, powerOfTen, middlePart, swappedNum;

    // Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find the last digit
    ld = num % 10;

    // Find the first digit and number of digits
    fd = num;
    numDigits = 0;
    while (fd >= 10) {
        fd /= 10;
        numDigits++;
    }
    numDigits++; // To count the first digit

    // Calculate power of ten for the position of the first digit
    powerOfTen = 1;
    for (int i = 1; i < numDigits; i++) {
        powerOfTen *= 10;
    }

    // Extract the middle part of the number
    middlePart = (num % powerOfTen) / 10;

    // Form the new number by swapping first and last digits
    swappedNum = ld * powerOfTen + middlePart * 10 + fd;

    // Print the result
    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}