#include <stdio.h>
// Program to determine the type of triangle based on side lengths
int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check for valid triangle
    if (a <= 0 || b <= 0 || c <= 0 ||
        (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Invalid triangle.\n");
        return 1;
    }

    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }

    return 0;
}