//Find the maximum and minimum element in an array.
#include <stdio.h>
int main() {
    int arr[] = {3, 5, 1, 8, 2}; // Example array
    int n = 5; // Number of elements in the array
    int max = arr[0];
    int min = arr[0];

    // Find maximum and minimum elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);
    return 0;
}