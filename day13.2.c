#include <stdio.h>
// Program to print numbers from 1 to n using a for loop
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}