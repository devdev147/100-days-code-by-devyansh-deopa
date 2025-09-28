#include <stdio.h>
//hcf of 2 numbers
int find_hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 56, num2 = 98;
    printf("The HCF of %d and %d is %d\n", num1, num2, find_hcf(num1, num2));
    return 0;
}
