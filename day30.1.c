//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Example array
    int n = 6; // Number of elements in the array
    int    e = 0;
    int o = 0;

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }

    printf("The number of even elements is: %d\n", e);
    printf("The number of odd elements is: %d\n", o);
    return 0;
}