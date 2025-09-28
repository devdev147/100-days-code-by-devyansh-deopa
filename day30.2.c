//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int arr[] = {1, -2, 0, 4, -5, 0}; // Example array
    int n = 6; // Number of elements in the array
    int p = 0;
    int ne = 0;
    int z = 0;

    // Count positive, negative, and zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            p++;
        } else if (arr[i] < 0) {
            ne++;
        } else {
            z++;
        }
    }

    printf("The number of positive elements is: %d\n", p);
    printf("The number of negative elements is: %d\n", ne);
    printf("The number of zero elements is: %d\n", z);
    return 0;
}